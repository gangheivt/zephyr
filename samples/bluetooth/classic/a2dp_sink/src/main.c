#include <zephyr/kernel.h>
#include <zephyr/bluetooth/bluetooth.h>
#include <zephyr/bluetooth/conn.h>
#include <zephyr/bluetooth/classic/sdp.h>
#include <zephyr/bluetooth/classic/a2dp.h>
#include <zephyr/bluetooth/classic/avrcp.h>
#include <zephyr/bluetooth/classic/a2dp_codec_sbc.h>
#include <zephyr/bluetooth/classic/classic.h>
#include <zephyr/bluetooth/sbc.h>
#include <zephyr/drivers/dac.h>
#include <zephyr/drivers/dma.h>
#include <zephyr/logging/log.h>
#include <string.h>


LOG_MODULE_REGISTER(a2dp_dac_sink, LOG_LEVEL_INF);

/* Audio Configuration */
#define AUDIO_BUF_SIZE    4096
#define DAC_CHANNEL       0
#define SAMPLE_RATE      44100
#define SAMPLES_PER_BUF   (AUDIO_BUF_SIZE / sizeof(int16_t))

/* Device Pointers */
static const struct device *dac_dev;

/* DAC Configuration */
static struct dac_channel_cfg dac_cfg = {
    .channel_id = DAC_CHANNEL,
    .resolution = 12,  // 12-bit resolution
};

/* Audio Buffers */
static int16_t audio_buf[2][SAMPLES_PER_BUF];
static volatile uint8_t active_buf = 0;
static volatile bool buf_ready[2] = {true, true};
static volatile bool is_playing = false;
static volatile size_t current_sample = 0;

/* A2DP Variables */
static struct bt_a2dp_stream a2dp_stream;
static struct bt_a2dp *active_a2dp = NULL;
static struct bt_conn *active_bt_conn = NULL;

/* SBC decoder*/
static struct sbc_decoder decoder;

// -------------------------- DAC Initialization --------------------------
static int dac_init(void)
{
#if 0    
    int err;
    dac_dev = DEVICE_DT_GET(DT_ALIAS(dac0));
    if (!device_is_ready(dac_dev)) {
        LOG_ERR("DAC device not ready");
        return -ENODEV;
    }
    
    // Configure DAC channel
    err = dac_channel_setup(dac_dev, &dac_cfg);
    if (err != 0) {
        LOG_ERR("Failed to setup DAC channel: %d", err);
        return err;
    }
    
#endif
    LOG_INF("DAC initialized successfully");
    return 0;
}

// -------------------------- Simple DAC Write (without DMA) --------------------------
static void write_audio_to_dac(const int16_t *samples, size_t count)
{
    for (size_t i = 0; i < count; i++) {
        // Convert signed 16-bit to unsigned 12-bit DAC value
        // DAC typically expects 0-4095 for 12-bit resolution
        uint32_t dac_value = (uint32_t)((samples[i] + 32768) >> 4);
        dac_value = CLAMP(dac_value, 0, 4095);
        
        int err = dac_write_value(dac_dev, DAC_CHANNEL, dac_value);
        if (err != 0) {
            LOG_WRN("DAC write failed: %d", err);
            break;
        }
        
        // Simple delay for sample rate - this is not accurate!
        // In real implementation, you'd use a proper timer or PWM
        k_busy_wait(1000000 / SAMPLE_RATE);
    }
}

// -------------------------- Audio Playback Management --------------------------
static void audio_playback_thread(void *arg1, void *arg2, void *arg3)
{
    ARG_UNUSED(arg1);
    ARG_UNUSED(arg2);
    ARG_UNUSED(arg3);
    
    while (1) {
        if (is_playing && buf_ready[active_buf]) {
			LOG_INF("Play buf %d", active_buf);
#if 0			
            write_audio_to_dac(audio_buf[active_buf], SAMPLES_PER_BUF);
#endif
            buf_ready[active_buf] = false;
            active_buf = 1 - active_buf;
        } else {
            k_sleep(K_MSEC(10));
        }
    }
}

K_THREAD_DEFINE(audio_thread, 2048, audio_playback_thread, 
                NULL, NULL, NULL, 5, 0, 0);

// -------------------------- A2DP Stream Operations --------------------------
static void a2dp_stream_configured(struct bt_a2dp_stream *stream)
{
	if (BT_A2DP_SBC == stream->local_ep->codec_type) {		
		uint8_t *codec_ie=stream->codec_config.codec_ie;
		uint16_t codec_ie_len=stream->codec_config.len;

		LOG_INF("  codec type: SBC");

		if (BT_A2DP_SBC_IE_LENGTH != codec_ie_len) {
			LOG_ERR("  wrong sbc codec ie");
			return;
		}

		LOG_INF("  sample frequency:");
		if (0U != (codec_ie[0U] & A2DP_SBC_SAMP_FREQ_16000)) {
			LOG_INF("	16000 ");
		}
		if (0U != (codec_ie[0U] & A2DP_SBC_SAMP_FREQ_32000)) {
			LOG_INF("	32000 ");
		}
		if (0U != (codec_ie[0U] & A2DP_SBC_SAMP_FREQ_44100)) {
			LOG_INF("	44100 ");
		}
		if (0U != (codec_ie[0U] & A2DP_SBC_SAMP_FREQ_48000)) {
			LOG_INF("	48000");
		}

		LOG_INF("  channel mode:");
		if (0U != (codec_ie[0U] & A2DP_SBC_CH_MODE_MONO)) {
			LOG_INF("	Mono ");
		}
		if (0U != (codec_ie[0U] & A2DP_SBC_CH_MODE_DUAL)) {
			LOG_INF("	Dual ");
		}
		if (0U != (codec_ie[0U] & A2DP_SBC_CH_MODE_STEREO)) {
			LOG_INF("	Stereo ");
		}
		if (0U != (codec_ie[0U] & A2DP_SBC_CH_MODE_JOINT)) {
			LOG_INF("	Joint-Stereo");
		}

		/* Decode Support for Block Length */
		LOG_INF("  Block Length:");
		if (0U != (codec_ie[1U] & A2DP_SBC_BLK_LEN_4)) {
			LOG_INF("	4 ");
		}
		if (0U != (codec_ie[1U] & A2DP_SBC_BLK_LEN_8)) {
			LOG_INF("	8 ");
		}
		if (0U != (codec_ie[1U] & A2DP_SBC_BLK_LEN_12)) {
			LOG_INF("	12 ");
		}
		if (0U != (codec_ie[1U] & A2DP_SBC_BLK_LEN_16)) {
			LOG_INF("	16");
		}

		/* Decode Support for Subbands */
		LOG_INF("  Subbands:");
		if (0U != (codec_ie[1U] & A2DP_SBC_SUBBAND_4)) {
			LOG_INF("	4 ");
		}
		if (0U != (codec_ie[1U] & A2DP_SBC_SUBBAND_8)) {
			LOG_INF("	8");
		}

		/* Decode Support for Allocation Method */
		LOG_INF("  Allocation Method:");
		if (0U != (codec_ie[1U] & A2DP_SBC_ALLOC_MTHD_SNR)) {
			LOG_INF("	SNR ");
		}
		if (0U != (codec_ie[1U] & A2DP_SBC_ALLOC_MTHD_LOUDNESS)) {
			LOG_INF("	Loudness");
		}

		LOG_INF("  Bitpool Range: %d - %d",
			       codec_ie[2U], codec_ie[3U]);
	} else {
		LOG_INF("  not SBC codecs");
	}
    LOG_INF("A2DP stream configured");
	sbc_setup_decoder(&decoder);
}

static void a2dp_stream_established(struct bt_a2dp_stream *stream)
{
    LOG_INF("A2DP stream established");
}

static void a2dp_stream_released(struct bt_a2dp_stream *stream)
{
    LOG_INF("A2DP stream released");
    is_playing = false;
    memset(audio_buf, 0, sizeof(audio_buf));
    active_a2dp = NULL;
    active_bt_conn = NULL;
}

static void a2dp_stream_started(struct bt_a2dp_stream *stream)
{
    LOG_INF("A2DP stream started");
    is_playing = true;
}

static void a2dp_stream_suspended(struct bt_a2dp_stream *stream)
{
    LOG_INF("A2DP stream suspended");
    is_playing = false;
}

static void a2dp_stream_recv(struct bt_a2dp_stream *stream, struct net_buf *buf, 
                            uint16_t seq_num, uint32_t ts)
{
    ARG_UNUSED(stream);
    ARG_UNUSED(seq_num);
    ARG_UNUSED(ts);

    int target_buf = buf_ready[active_buf]? (1-active_buf):active_buf;
	
    // Only copy data if the target buffer is empty
    LOG_INF("%d, %d", buf_ready[0], buf_ready[1]);
    if (!buf_ready[target_buf]) {	
		
	    // Extract SBC frame data from net_buf
    	const void *in_data = buf->data;  // Pointer to start of SBC frame
    	uint32_t in_size = buf->len;      // Size of SBC frame in bytes

    	// Prepare output parameters
    	void *out_data = audio_buf[target_buf];
    	uint32_t out_size = SAMPLES_PER_BUF;

    	// Decode the SBC frame using your custom decoder
    	int ret = sbc_decode(&decoder, &in_data, &in_size, out_data, &out_size);
    	if (ret != 0) {
        	LOG_ERR("SBC decode failed: %d", ret);
        	return;
    	}

    	// Decoding succeeded: process PCM data (e.g., send to DAC)
    	LOG_INF("Decoded PCM: %u bytes (samples: %u) to buf %d", out_size, out_size / 2, target_buf);
        buf_ready[target_buf] = true;
    } else {
        LOG_WRN("Buffer %d not ready, dropping %zu bytes", target_buf, buf->len);
    }
}

static struct bt_a2dp_stream_ops a2dp_stream_ops = {
    .configured = a2dp_stream_configured,
    .established = a2dp_stream_established,
    .released = a2dp_stream_released,
    .started = a2dp_stream_started,
    .suspended = a2dp_stream_suspended,
    .recv = a2dp_stream_recv,
};

// -------------------------- A2DP Callbacks --------------------------
static int a2dp_config_req(struct bt_a2dp *a2dp, struct bt_a2dp_ep *ep,
                          struct bt_a2dp_codec_cfg *codec_cfg, struct bt_a2dp_stream **stream,
                          uint8_t *rsp_err_code)
{
    LOG_INF("A2DP config request");
    
    *stream = &a2dp_stream;
    bt_a2dp_stream_cb_register(*stream, &a2dp_stream_ops);
    
    return 0;
}

static int a2dp_start_req(struct bt_a2dp_stream *stream, uint8_t *rsp_err_code)
{
    LOG_INF("A2DP start request");
    return 0;
}

static int a2dp_suspend_req(struct bt_a2dp_stream *stream, uint8_t *rsp_err_code)
{
    LOG_INF("A2DP suspend request");
    return 0;
}

static int a2dp_release_req(struct bt_a2dp_stream *stream, uint8_t *rsp_err_code)
{
    LOG_INF("A2DP release request");
    return 0;
}

static void a2dp_connected(struct bt_a2dp *a2dp, int err)
{
    if (err != 0) {
        LOG_ERR("A2DP connection failed: %d", err);
        return;
    }
    
    LOG_INF("A2DP connected");
    active_a2dp = a2dp;
    active_bt_conn = bt_a2dp_get_conn(a2dp);
}

static void a2dp_disconnected(struct bt_a2dp *a2dp)
{
    LOG_INF("A2DP disconnected");
    active_a2dp = NULL;
    active_bt_conn = NULL;
    is_playing = false;
    memset(audio_buf, 0, sizeof(audio_buf));
}

static struct bt_a2dp_cb a2dp_cb = {
    .connected = a2dp_connected,
    .disconnected = a2dp_disconnected,
    .config_req = a2dp_config_req,
    .start_req = a2dp_start_req,
    .suspend_req = a2dp_suspend_req,
    .release_req = a2dp_release_req,
};

// -------------------------- AVRCP TG Callbacks --------------------------
static void avrcp_tg_connected(struct bt_conn *conn, struct bt_avrcp_tg *tg)
{
    LOG_INF("AVRCP TG connected");
}

static void avrcp_tg_disconnected(struct bt_avrcp_tg *tg)
{
    LOG_INF("AVRCP TG disconnected");
}

static void avrcp_tg_passthrough_req(struct bt_avrcp_tg *tg, uint8_t tid, struct net_buf *buf)
{
    // Parse pass-through command
    uint8_t *data = buf->data;
    uint8_t opid = data[0] & 0x7F;
    uint8_t state = (data[0] >> 7) & 0x01;
    
    LOG_INF("AVRCP pass-through: opid=0x%02x, state=%d", opid, state);
    
    if (state == 0) {  // Button pressed
        switch (opid) {
            case 0x44:  // Play
                LOG_INF("Play command");
                is_playing = true;
                break;
                
            case 0x46:  // Pause
                LOG_INF("Pause command");
                is_playing = false;
                break;
                
            case 0x45:  // Stop
                LOG_INF("Stop command");
                is_playing = false;
                memset(audio_buf, 0, sizeof(audio_buf));
                break;
                
            default:
                LOG_DBG("Unhandled AVRCP opid: 0x%02x", opid);
                break;
        }
    }
    
    // Send response
    struct net_buf *rsp = bt_avrcp_create_pdu(NULL);
    if (rsp) {
        net_buf_add_u8(rsp, data[0]);  // Echo back the same data
        bt_avrcp_tg_send_passthrough_rsp(tg, tid, BT_AVRCP_RSP_ACCEPTED, rsp);
        net_buf_unref(rsp);
    }
    
    net_buf_unref(buf);
}

static struct bt_avrcp_tg_cb avrcp_tg_cb = {
    .connected = avrcp_tg_connected,
    .disconnected = avrcp_tg_disconnected,
    .passthrough_req = avrcp_tg_passthrough_req,
};

// -------------------------- A2DP Endpoint Definition --------------------------
BT_A2DP_SBC_SINK_EP_DEFAULT(a2dp_sink_ep);


static struct bt_sdp_attribute a2dp_sink_attrs[] = {
	BT_SDP_NEW_SERVICE,
	BT_SDP_LIST(
		BT_SDP_ATTR_SVCLASS_ID_LIST,
		BT_SDP_TYPE_SIZE_VAR(BT_SDP_SEQ8, 3), /* 35 03 */
		BT_SDP_DATA_ELEM_LIST(
		{
			BT_SDP_TYPE_SIZE(BT_SDP_UUID16), /* 19 */
			BT_SDP_ARRAY_16(BT_SDP_AUDIO_SINK_SVCLASS) /* 11 0B */
		},
		)
	),
	BT_SDP_LIST(
		BT_SDP_ATTR_PROTO_DESC_LIST,
		BT_SDP_TYPE_SIZE_VAR(BT_SDP_SEQ8, 16),/* 35 10 */
		BT_SDP_DATA_ELEM_LIST(
		{
			BT_SDP_TYPE_SIZE_VAR(BT_SDP_SEQ8, 6),/* 35 06 */
			BT_SDP_DATA_ELEM_LIST(
			{
				BT_SDP_TYPE_SIZE(BT_SDP_UUID16), /* 19 */
				BT_SDP_ARRAY_16(BT_SDP_PROTO_L2CAP) /* 01 00 */
			},
			{
				BT_SDP_TYPE_SIZE(BT_SDP_UINT16), /* 09 */
				BT_SDP_ARRAY_16(BT_UUID_AVDTP_VAL) /* 00 19 */
			},
			)
		},
		{
			BT_SDP_TYPE_SIZE_VAR(BT_SDP_SEQ8, 6),/* 35 06 */
			BT_SDP_DATA_ELEM_LIST(
			{
				BT_SDP_TYPE_SIZE(BT_SDP_UUID16), /* 19 */
				BT_SDP_ARRAY_16(BT_UUID_AVDTP_VAL) /* 00 19 */
			},
			{
				BT_SDP_TYPE_SIZE(BT_SDP_UINT16), /* 09 */
				BT_SDP_ARRAY_16(AVDTP_VERSION) /* AVDTP version: 01 03 */
			},
			)
		},
		)
	),
	BT_SDP_LIST(
		BT_SDP_ATTR_PROFILE_DESC_LIST,
		BT_SDP_TYPE_SIZE_VAR(BT_SDP_SEQ8, 8), /* 35 08 */
		BT_SDP_DATA_ELEM_LIST(
		{
			BT_SDP_TYPE_SIZE_VAR(BT_SDP_SEQ8, 6), /* 35 06 */
			BT_SDP_DATA_ELEM_LIST(
			{
				BT_SDP_TYPE_SIZE(BT_SDP_UUID16), /* 19 */
				BT_SDP_ARRAY_16(BT_SDP_ADVANCED_AUDIO_SVCLASS) /* 11 0d */
			},
			{
				BT_SDP_TYPE_SIZE(BT_SDP_UINT16), /* 09 */
				BT_SDP_ARRAY_16(0x0103U) /* 01 03 */
			},
			)
		},
		)
	),
	BT_SDP_SERVICE_NAME("A2DPSink"),
	BT_SDP_SUPPORTED_FEATURES(0x0001U),
};

static struct bt_sdp_record a2dp_sink_rec = BT_SDP_RECORD(a2dp_sink_attrs);


// -------------------------- Bluetooth Initialization --------------------------
static int bluetooth_init(void)
{
    int err;

    err = bt_enable(NULL);
    if (err != 0) {
        LOG_ERR("BT enable failed: %d", err);
        return err;
    }

	err = bt_sdp_register_service(&a2dp_sink_rec);
    if (err != 0) {
        LOG_ERR("A2DP sink SDP register failed: %d", err);
        return err;
    }

    /* Register A2DP endpoint */
    err = bt_a2dp_register_ep(&a2dp_sink_ep, BT_AVDTP_AUDIO, BT_AVDTP_SINK);
    if (err != 0) {
        LOG_ERR("A2DP endpoint register failed: %d", err);
        return err;
    }

    /* Register A2DP callbacks */
    err = bt_a2dp_register_cb(&a2dp_cb);
    if (err != 0) {
        LOG_ERR("A2DP callback register failed: %d", err);
        return err;
    }

    /* Register AVRCP TG callbacks */
    err = bt_avrcp_tg_register_cb(&avrcp_tg_cb);
    if (err != 0) {
        LOG_ERR("AVRCP TG callback register failed: %d", err);
        return err;
    }

    err = bt_set_name("Zephyr A2DP DAC");
    if (err != 0) {
        LOG_ERR("Set BT name failed: %d", err);
        return err;
    }

    err = bt_br_set_connectable(true);
    if (err != 0) {
        LOG_ERR("Enable connectable failed: %d", err);
        return err;
    }

    err = bt_br_set_discoverable(true, false);
    if (err != 0) {
        LOG_ERR("Enable discoverable failed: %d", err);
        return err;
    }

    LOG_INF("BT initialized: discoverable as 'Zephyr A2DP DAC'");
    return 0;
}

// -------------------------- Main Function --------------------------
int main(void)
{
    int err;

    LOG_INF("Starting A2DP DAC Sink...");

    err = dac_init();
    if (err != 0) { 
        LOG_ERR("DAC init failed: %d", err); 
        return err; 
    }

    err = bluetooth_init();
    if (err != 0) { 
        LOG_ERR("BT init failed: %d", err); 
        return err; 
    }

    LOG_INF("A2DP DAC Sink ready. Waiting for connection...");
    
    while (1) {
        k_sleep(K_SECONDS(5));
        
        // Log status periodically
        if (active_bt_conn != NULL) {
            LOG_INF("Status - Connected: yes, Playing: %s, Active buf: %d", 
                   is_playing ? "yes" : "no", active_buf);
        } else {
            LOG_INF("Status - Waiting for connection...");
        }
    }
}
