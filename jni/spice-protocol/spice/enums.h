/* this is a file autogenerated by spice_codegen.py */
#ifndef _H_SPICE_ENUMS
#define _H_SPICE_ENUMS

/* Generated from spice.proto, don't edit */

typedef enum SpiceLinkErr {
    SPICE_LINK_ERR_OK,
    SPICE_LINK_ERR_ERROR,
    SPICE_LINK_ERR_INVALID_MAGIC,
    SPICE_LINK_ERR_INVALID_DATA,
    SPICE_LINK_ERR_VERSION_MISMATCH,
    SPICE_LINK_ERR_NEED_SECURED,
    SPICE_LINK_ERR_NEED_UNSECURED,
    SPICE_LINK_ERR_PERMISSION_DENIED,
    SPICE_LINK_ERR_BAD_CONNECTION_ID,
    SPICE_LINK_ERR_CHANNEL_NOT_AVAILABLE,

    SPICE_LINK_ERR_ENUM_END
} SpiceLinkErr;

typedef enum SpiceWarnCode {
    SPICE_WARN_GENERAL,

    SPICE_WARN_CODE_ENUM_END
} SpiceWarnCode;

typedef enum SpiceInfoCode {
    SPICE_INFO_GENERAL,

    SPICE_INFO_CODE_ENUM_END
} SpiceInfoCode;

typedef enum SpiceMigrateFlags {
    SPICE_MIGRATE_NEED_FLUSH = (1 << 0),
    SPICE_MIGRATE_NEED_DATA_TRANSFER = (1 << 1),

    SPICE_MIGRATE_FLAGS_MASK = 0x3
} SpiceMigrateFlags;

typedef enum SpiceCompositeFlags {
    SPICE_COMPOSITE_OP0 = (1 << 0),
    SPICE_COMPOSITE_OP1 = (1 << 1),
    SPICE_COMPOSITE_OP2 = (1 << 2),
    SPICE_COMPOSITE_OP3 = (1 << 3),
    SPICE_COMPOSITE_OP4 = (1 << 4),
    SPICE_COMPOSITE_OP5 = (1 << 5),
    SPICE_COMPOSITE_OP6 = (1 << 6),
    SPICE_COMPOSITE_OP7 = (1 << 7),
    SPICE_COMPOSITE_SRC_FILTER0 = (1 << 8),
    SPICE_COMPOSITE_SRC_FILTER1 = (1 << 9),
    SPICE_COMPOSITE_SRC_FILTER2 = (1 << 10),
    SPICE_COMPOSITE_MASK_FILTER0 = (1 << 11),
    SPICE_COMPOSITE_MASK_FITLER1 = (1 << 12),
    SPICE_COMPOSITE_MASK_FILTER2 = (1 << 13),
    SPICE_COMPOSITE_SRC_REPEAT0 = (1 << 14),
    SPICE_COMPOSITE_SRC_REPEAT1 = (1 << 15),
    SPICE_COMPOSITE_MASK_REPEAT0 = (1 << 16),
    SPICE_COMPOSITE_MASK_REPEAT1 = (1 << 17),
    SPICE_COMPOSITE_COMPONENT_ALPHA = (1 << 18),
    SPICE_COMPOSITE_HAS_MASK = (1 << 19),
    SPICE_COMPOSITE_HAS_SRC_TRANSFORM = (1 << 20),
    SPICE_COMPOSITE_HAS_MASK_TRANSFORM = (1 << 21),
    SPICE_COMPOSITE_SOURCE_OPAQUE = (1 << 22),
    SPICE_COMPOSITE_MASK_OPAQUE = (1 << 23),
    SPICE_COMPOSITE_DEST_OPAQUE = (1 << 24),

    SPICE_COMPOSITE_FLAGS_MASK = 0x1ffffff
} SpiceCompositeFlags;

typedef enum SpiceNotifySeverity {
    SPICE_NOTIFY_SEVERITY_INFO,
    SPICE_NOTIFY_SEVERITY_WARN,
    SPICE_NOTIFY_SEVERITY_ERROR,

    SPICE_NOTIFY_SEVERITY_ENUM_END
} SpiceNotifySeverity;

typedef enum SpiceNotifyVisibility {
    SPICE_NOTIFY_VISIBILITY_LOW,
    SPICE_NOTIFY_VISIBILITY_MEDIUM,
    SPICE_NOTIFY_VISIBILITY_HIGH,

    SPICE_NOTIFY_VISIBILITY_ENUM_END
} SpiceNotifyVisibility;

typedef enum SpiceMouseMode {
    SPICE_MOUSE_MODE_SERVER = (1 << 0),
    SPICE_MOUSE_MODE_CLIENT = (1 << 1),

    SPICE_MOUSE_MODE_MASK = 0x3
} SpiceMouseMode;

typedef enum SpicePubkeyType {
    SPICE_PUBKEY_TYPE_INVALID,
    SPICE_PUBKEY_TYPE_RSA,
    SPICE_PUBKEY_TYPE_RSA2,
    SPICE_PUBKEY_TYPE_DSA,
    SPICE_PUBKEY_TYPE_DSA1,
    SPICE_PUBKEY_TYPE_DSA2,
    SPICE_PUBKEY_TYPE_DSA3,
    SPICE_PUBKEY_TYPE_DSA4,
    SPICE_PUBKEY_TYPE_DH,
    SPICE_PUBKEY_TYPE_EC,

    SPICE_PUBKEY_TYPE_ENUM_END
} SpicePubkeyType;

typedef enum SpiceClipType {
    SPICE_CLIP_TYPE_NONE,
    SPICE_CLIP_TYPE_RECTS,

    SPICE_CLIP_TYPE_ENUM_END
} SpiceClipType;

typedef enum SpicePathFlags {
    SPICE_PATH_BEGIN = (1 << 0),
    SPICE_PATH_END = (1 << 1),
    SPICE_PATH_CLOSE = (1 << 3),
    SPICE_PATH_BEZIER = (1 << 4),

    SPICE_PATH_FLAGS_MASK = 0x1b
} SpicePathFlags;

typedef enum SpiceVideoCodecType {
    SPICE_VIDEO_CODEC_TYPE_MJPEG = 1,

    SPICE_VIDEO_CODEC_TYPE_ENUM_END
} SpiceVideoCodecType;

typedef enum SpiceStreamFlags {
    SPICE_STREAM_FLAGS_TOP_DOWN = (1 << 0),

    SPICE_STREAM_FLAGS_MASK = 0x1
} SpiceStreamFlags;

typedef enum SpiceBrushType {
    SPICE_BRUSH_TYPE_NONE,
    SPICE_BRUSH_TYPE_SOLID,
    SPICE_BRUSH_TYPE_PATTERN,

    SPICE_BRUSH_TYPE_ENUM_END
} SpiceBrushType;

typedef enum SpiceMaskFlags {
    SPICE_MASK_FLAGS_INVERS = (1 << 0),

    SPICE_MASK_FLAGS_MASK = 0x1
} SpiceMaskFlags;

typedef enum SpiceImageType {
    SPICE_IMAGE_TYPE_BITMAP,
    SPICE_IMAGE_TYPE_QUIC,
    SPICE_IMAGE_TYPE_RESERVED,
    SPICE_IMAGE_TYPE_LZ_PLT = 100,
    SPICE_IMAGE_TYPE_LZ_RGB,
    SPICE_IMAGE_TYPE_GLZ_RGB,
    SPICE_IMAGE_TYPE_FROM_CACHE,
    SPICE_IMAGE_TYPE_SURFACE,
    SPICE_IMAGE_TYPE_JPEG,
    SPICE_IMAGE_TYPE_FROM_CACHE_LOSSLESS,
    SPICE_IMAGE_TYPE_ZLIB_GLZ_RGB,
    SPICE_IMAGE_TYPE_JPEG_ALPHA,

    SPICE_IMAGE_TYPE_ENUM_END
} SpiceImageType;

typedef enum SpiceImageFlags {
    SPICE_IMAGE_FLAGS_CACHE_ME = (1 << 0),
    SPICE_IMAGE_FLAGS_HIGH_BITS_SET = (1 << 1),
    SPICE_IMAGE_FLAGS_CACHE_REPLACE_ME = (1 << 2),

    SPICE_IMAGE_FLAGS_MASK = 0x7
} SpiceImageFlags;

typedef enum SpiceBitmapFmt {
    SPICE_BITMAP_FMT_INVALID,
    SPICE_BITMAP_FMT_1BIT_LE,
    SPICE_BITMAP_FMT_1BIT_BE,
    SPICE_BITMAP_FMT_4BIT_LE,
    SPICE_BITMAP_FMT_4BIT_BE,
    SPICE_BITMAP_FMT_8BIT,
    SPICE_BITMAP_FMT_16BIT,
    SPICE_BITMAP_FMT_24BIT,
    SPICE_BITMAP_FMT_32BIT,
    SPICE_BITMAP_FMT_RGBA,
    SPICE_BITMAP_FMT_8BIT_A,

    SPICE_BITMAP_FMT_ENUM_END
} SpiceBitmapFmt;

typedef enum SpiceBitmapFlags {
    SPICE_BITMAP_FLAGS_PAL_CACHE_ME = (1 << 0),
    SPICE_BITMAP_FLAGS_PAL_FROM_CACHE = (1 << 1),
    SPICE_BITMAP_FLAGS_TOP_DOWN = (1 << 2),

    SPICE_BITMAP_FLAGS_MASK = 0x7
} SpiceBitmapFlags;

typedef enum SpiceJpegAlphaFlags {
    SPICE_JPEG_ALPHA_FLAGS_TOP_DOWN = (1 << 0),

    SPICE_JPEG_ALPHA_FLAGS_MASK = 0x1
} SpiceJpegAlphaFlags;

typedef enum SpiceImageScaleMode {
    SPICE_IMAGE_SCALE_MODE_INTERPOLATE,
    SPICE_IMAGE_SCALE_MODE_NEAREST,

    SPICE_IMAGE_SCALE_MODE_ENUM_END
} SpiceImageScaleMode;

typedef enum SpiceRopd {
    SPICE_ROPD_INVERS_SRC = (1 << 0),
    SPICE_ROPD_INVERS_BRUSH = (1 << 1),
    SPICE_ROPD_INVERS_DEST = (1 << 2),
    SPICE_ROPD_OP_PUT = (1 << 3),
    SPICE_ROPD_OP_OR = (1 << 4),
    SPICE_ROPD_OP_AND = (1 << 5),
    SPICE_ROPD_OP_XOR = (1 << 6),
    SPICE_ROPD_OP_BLACKNESS = (1 << 7),
    SPICE_ROPD_OP_WHITENESS = (1 << 8),
    SPICE_ROPD_OP_INVERS = (1 << 9),
    SPICE_ROPD_INVERS_RES = (1 << 10),

    SPICE_ROPD_MASK = 0x7ff
} SpiceRopd;

typedef enum SpiceLineFlags {
    SPICE_LINE_FLAGS_START_WITH_GAP = (1 << 2),
    SPICE_LINE_FLAGS_STYLED = (1 << 3),

    SPICE_LINE_FLAGS_MASK = 0xc
} SpiceLineFlags;

typedef enum SpiceStringFlags {
    SPICE_STRING_FLAGS_RASTER_A1 = (1 << 0),
    SPICE_STRING_FLAGS_RASTER_A4 = (1 << 1),
    SPICE_STRING_FLAGS_RASTER_A8 = (1 << 2),
    SPICE_STRING_FLAGS_RASTER_TOP_DOWN = (1 << 3),

    SPICE_STRING_FLAGS_MASK = 0xf
} SpiceStringFlags;

typedef enum SpiceSurfaceFlags {
    SPICE_SURFACE_FLAGS_PRIMARY = (1 << 0),

    SPICE_SURFACE_FLAGS_MASK = 0x1
} SpiceSurfaceFlags;

typedef enum SpiceSurfaceFmt {
    SPICE_SURFACE_FMT_INVALID,
    SPICE_SURFACE_FMT_1_A,
    SPICE_SURFACE_FMT_8_A = 8,
    SPICE_SURFACE_FMT_16_555 = 16,
    SPICE_SURFACE_FMT_32_xRGB = 32,
    SPICE_SURFACE_FMT_16_565 = 80,
    SPICE_SURFACE_FMT_32_ARGB = 96,

    SPICE_SURFACE_FMT_ENUM_END
} SpiceSurfaceFmt;

typedef enum SpiceAlphaFlags {
    SPICE_ALPHA_FLAGS_DEST_HAS_ALPHA = (1 << 0),
    SPICE_ALPHA_FLAGS_SRC_SURFACE_HAS_ALPHA = (1 << 1),

    SPICE_ALPHA_FLAGS_MASK = 0x3
} SpiceAlphaFlags;

typedef enum SpiceResourceType {
    SPICE_RES_TYPE_INVALID,
    SPICE_RES_TYPE_PIXMAP,

    SPICE_RESOURCE_TYPE_ENUM_END
} SpiceResourceType;

typedef enum SpiceKeyboardModifierFlags {
    SPICE_KEYBOARD_MODIFIER_FLAGS_SCROLL_LOCK = (1 << 0),
    SPICE_KEYBOARD_MODIFIER_FLAGS_NUM_LOCK = (1 << 1),
    SPICE_KEYBOARD_MODIFIER_FLAGS_CAPS_LOCK = (1 << 2),

    SPICE_KEYBOARD_MODIFIER_FLAGS_MASK = 0x7
} SpiceKeyboardModifierFlags;

typedef enum SpiceMouseButton {
    SPICE_MOUSE_BUTTON_INVALID,
    SPICE_MOUSE_BUTTON_LEFT,
    SPICE_MOUSE_BUTTON_MIDDLE,
    SPICE_MOUSE_BUTTON_RIGHT,
    SPICE_MOUSE_BUTTON_UP,
    SPICE_MOUSE_BUTTON_DOWN,

    SPICE_MOUSE_BUTTON_ENUM_END
} SpiceMouseButton;

typedef enum SpiceMouseButtonMask {
    SPICE_MOUSE_BUTTON_MASK_LEFT = (1 << 0),
    SPICE_MOUSE_BUTTON_MASK_MIDDLE = (1 << 1),
    SPICE_MOUSE_BUTTON_MASK_RIGHT = (1 << 2),

    SPICE_MOUSE_BUTTON_MASK_MASK = 0x7
} SpiceMouseButtonMask;

typedef enum SpiceCursorType {
    SPICE_CURSOR_TYPE_ALPHA,
    SPICE_CURSOR_TYPE_MONO,
    SPICE_CURSOR_TYPE_COLOR4,
    SPICE_CURSOR_TYPE_COLOR8,
    SPICE_CURSOR_TYPE_COLOR16,
    SPICE_CURSOR_TYPE_COLOR24,
    SPICE_CURSOR_TYPE_COLOR32,

    SPICE_CURSOR_TYPE_ENUM_END
} SpiceCursorType;

typedef enum SpiceCursorFlags {
    SPICE_CURSOR_FLAGS_NONE = (1 << 0),
    SPICE_CURSOR_FLAGS_CACHE_ME = (1 << 1),
    SPICE_CURSOR_FLAGS_FROM_CACHE = (1 << 2),

    SPICE_CURSOR_FLAGS_MASK = 0x7
} SpiceCursorFlags;

typedef enum SpiceAudioDataMode {
    SPICE_AUDIO_DATA_MODE_INVALID,
    SPICE_AUDIO_DATA_MODE_RAW,
    SPICE_AUDIO_DATA_MODE_CELT_0_5_1,

    SPICE_AUDIO_DATA_MODE_ENUM_END
} SpiceAudioDataMode;

typedef enum SpiceAudioFmt {
    SPICE_AUDIO_FMT_INVALID,
    SPICE_AUDIO_FMT_S16,

    SPICE_AUDIO_FMT_ENUM_END
} SpiceAudioFmt;

typedef enum SpiceTunnelServiceType {
    SPICE_TUNNEL_SERVICE_TYPE_INVALID,
    SPICE_TUNNEL_SERVICE_TYPE_GENERIC,
    SPICE_TUNNEL_SERVICE_TYPE_IPP,

    SPICE_TUNNEL_SERVICE_TYPE_ENUM_END
} SpiceTunnelServiceType;

typedef enum SpiceTunnelIpType {
    SPICE_TUNNEL_IP_TYPE_INVALID,
    SPICE_TUNNEL_IP_TYPE_IPv4,

    SPICE_TUNNEL_IP_TYPE_ENUM_END
} SpiceTunnelIpType;

typedef enum SpiceVscMessageType {
    SPICE_VSC_MESSAGE_TYPE_Init = 1,
    SPICE_VSC_MESSAGE_TYPE_Error,
    SPICE_VSC_MESSAGE_TYPE_ReaderAdd,
    SPICE_VSC_MESSAGE_TYPE_ReaderRemove,
    SPICE_VSC_MESSAGE_TYPE_ATR,
    SPICE_VSC_MESSAGE_TYPE_CardRemove,
    SPICE_VSC_MESSAGE_TYPE_APDU,
    SPICE_VSC_MESSAGE_TYPE_Flush,
    SPICE_VSC_MESSAGE_TYPE_FlushComplete,

    SPICE_VSC_MESSAGE_TYPE_ENUM_END
} SpiceVscMessageType;

enum {
    SPICE_CHANNEL_MAIN = 1,
    SPICE_CHANNEL_DISPLAY,
    SPICE_CHANNEL_INPUTS,
    SPICE_CHANNEL_CURSOR,
    SPICE_CHANNEL_PLAYBACK,
    SPICE_CHANNEL_RECORD,
    SPICE_CHANNEL_TUNNEL,
    SPICE_CHANNEL_SMARTCARD,
    SPICE_CHANNEL_USBREDIR,
    SPICE_CHANNEL_PORT,

    SPICE_END_CHANNEL
};

enum {
    SPICE_MSG_MIGRATE = 1,
    SPICE_MSG_MIGRATE_DATA,
    SPICE_MSG_SET_ACK,
    SPICE_MSG_PING,
    SPICE_MSG_WAIT_FOR_CHANNELS,
    SPICE_MSG_DISCONNECTING,
    SPICE_MSG_NOTIFY,
    SPICE_MSG_LIST,
};

enum {
    SPICE_MSGC_ACK_SYNC = 1,
    SPICE_MSGC_ACK,
    SPICE_MSGC_PONG,
    SPICE_MSGC_MIGRATE_FLUSH_MARK,
    SPICE_MSGC_MIGRATE_DATA,
    SPICE_MSGC_DISCONNECTING,
};

enum {
    SPICE_MSG_MAIN_MIGRATE_BEGIN = 101,
    SPICE_MSG_MAIN_MIGRATE_CANCEL,
    SPICE_MSG_MAIN_INIT,
    SPICE_MSG_MAIN_CHANNELS_LIST,
    SPICE_MSG_MAIN_MOUSE_MODE,
    SPICE_MSG_MAIN_MULTI_MEDIA_TIME,
    SPICE_MSG_MAIN_AGENT_CONNECTED,
    SPICE_MSG_MAIN_AGENT_DISCONNECTED,
    SPICE_MSG_MAIN_AGENT_DATA,
    SPICE_MSG_MAIN_AGENT_TOKEN,
    SPICE_MSG_MAIN_MIGRATE_SWITCH_HOST,
    SPICE_MSG_MAIN_MIGRATE_END,
    SPICE_MSG_MAIN_NAME,
    SPICE_MSG_MAIN_UUID,
    SPICE_MSG_MAIN_AGENT_CONNECTED_TOKENS,
    SPICE_MSG_MAIN_MIGRATE_BEGIN_SEAMLESS,
    SPICE_MSG_MAIN_MIGRATE_DST_SEAMLESS_ACK,
    SPICE_MSG_MAIN_MIGRATE_DST_SEAMLESS_NACK,

    SPICE_MSG_END_MAIN
};

enum {
    SPICE_MSGC_MAIN_CLIENT_INFO = 101,
    SPICE_MSGC_MAIN_MIGRATE_CONNECTED,
    SPICE_MSGC_MAIN_MIGRATE_CONNECT_ERROR,
    SPICE_MSGC_MAIN_ATTACH_CHANNELS,
    SPICE_MSGC_MAIN_MOUSE_MODE_REQUEST,
    SPICE_MSGC_MAIN_AGENT_START,
    SPICE_MSGC_MAIN_AGENT_DATA,
    SPICE_MSGC_MAIN_AGENT_TOKEN,
    SPICE_MSGC_MAIN_MIGRATE_END,
    SPICE_MSGC_MAIN_MIGRATE_DST_DO_SEAMLESS,
    SPICE_MSGC_MAIN_MIGRATE_CONNECTED_SEAMLESS,

    SPICE_MSGC_END_MAIN
};

enum {
    SPICE_MSG_DISPLAY_MODE = 101,
    SPICE_MSG_DISPLAY_MARK,
    SPICE_MSG_DISPLAY_RESET,
    SPICE_MSG_DISPLAY_COPY_BITS,
    SPICE_MSG_DISPLAY_INVAL_LIST,
    SPICE_MSG_DISPLAY_INVAL_ALL_PIXMAPS,
    SPICE_MSG_DISPLAY_INVAL_PALETTE,
    SPICE_MSG_DISPLAY_INVAL_ALL_PALETTES,
    SPICE_MSG_DISPLAY_STREAM_CREATE = 122,
    SPICE_MSG_DISPLAY_STREAM_DATA,
    SPICE_MSG_DISPLAY_STREAM_CLIP,
    SPICE_MSG_DISPLAY_STREAM_DESTROY,
    SPICE_MSG_DISPLAY_STREAM_DESTROY_ALL,
    SPICE_MSG_DISPLAY_DRAW_FILL = 302,
    SPICE_MSG_DISPLAY_DRAW_OPAQUE,
    SPICE_MSG_DISPLAY_DRAW_COPY,
    SPICE_MSG_DISPLAY_DRAW_BLEND,
    SPICE_MSG_DISPLAY_DRAW_BLACKNESS,
    SPICE_MSG_DISPLAY_DRAW_WHITENESS,
    SPICE_MSG_DISPLAY_DRAW_INVERS,
    SPICE_MSG_DISPLAY_DRAW_ROP3,
    SPICE_MSG_DISPLAY_DRAW_STROKE,
    SPICE_MSG_DISPLAY_DRAW_TEXT,
    SPICE_MSG_DISPLAY_DRAW_TRANSPARENT,
    SPICE_MSG_DISPLAY_DRAW_ALPHA_BLEND,
    SPICE_MSG_DISPLAY_SURFACE_CREATE,
    SPICE_MSG_DISPLAY_SURFACE_DESTROY,
    SPICE_MSG_DISPLAY_STREAM_DATA_SIZED,
    SPICE_MSG_DISPLAY_MONITORS_CONFIG,
    SPICE_MSG_DISPLAY_DRAW_COMPOSITE,

    SPICE_MSG_END_DISPLAY
};

enum {
    SPICE_MSGC_DISPLAY_INIT = 101,

    SPICE_MSGC_END_DISPLAY
};

enum {
    SPICE_MSG_INPUTS_INIT = 101,
    SPICE_MSG_INPUTS_KEY_MODIFIERS,
    SPICE_MSG_INPUTS_MOUSE_MOTION_ACK = 111,

    SPICE_MSG_END_INPUTS
};

enum {
    SPICE_MSGC_INPUTS_KEY_DOWN = 101,
    SPICE_MSGC_INPUTS_KEY_UP,
    SPICE_MSGC_INPUTS_KEY_MODIFIERS,
    SPICE_MSGC_INPUTS_KEY_SCANCODE,
    SPICE_MSGC_INPUTS_MOUSE_MOTION = 111,
    SPICE_MSGC_INPUTS_MOUSE_POSITION,
    SPICE_MSGC_INPUTS_MOUSE_PRESS,
    SPICE_MSGC_INPUTS_MOUSE_RELEASE,

    SPICE_MSGC_END_INPUTS
};

enum {
    SPICE_MSG_CURSOR_INIT = 101,
    SPICE_MSG_CURSOR_RESET,
    SPICE_MSG_CURSOR_SET,
    SPICE_MSG_CURSOR_MOVE,
    SPICE_MSG_CURSOR_HIDE,
    SPICE_MSG_CURSOR_TRAIL,
    SPICE_MSG_CURSOR_INVAL_ONE,
    SPICE_MSG_CURSOR_INVAL_ALL,

    SPICE_MSG_END_CURSOR
};

enum {
    SPICE_MSG_PLAYBACK_DATA = 101,
    SPICE_MSG_PLAYBACK_MODE,
    SPICE_MSG_PLAYBACK_START,
    SPICE_MSG_PLAYBACK_STOP,
    SPICE_MSG_PLAYBACK_VOLUME,
    SPICE_MSG_PLAYBACK_MUTE,

    SPICE_MSG_END_PLAYBACK
};

enum {
    SPICE_MSG_RECORD_START = 101,
    SPICE_MSG_RECORD_STOP,
    SPICE_MSG_RECORD_VOLUME,
    SPICE_MSG_RECORD_MUTE,

    SPICE_MSG_END_RECORD
};

enum {
    SPICE_MSGC_RECORD_DATA = 101,
    SPICE_MSGC_RECORD_MODE,
    SPICE_MSGC_RECORD_START_MARK,

    SPICE_MSGC_END_RECORD
};

enum {
    SPICE_MSG_TUNNEL_INIT = 101,
    SPICE_MSG_TUNNEL_SERVICE_IP_MAP,
    SPICE_MSG_TUNNEL_SOCKET_OPEN,
    SPICE_MSG_TUNNEL_SOCKET_FIN,
    SPICE_MSG_TUNNEL_SOCKET_CLOSE,
    SPICE_MSG_TUNNEL_SOCKET_DATA,
    SPICE_MSG_TUNNEL_SOCKET_CLOSED_ACK,
    SPICE_MSG_TUNNEL_SOCKET_TOKEN,

    SPICE_MSG_END_TUNNEL
};

enum {
    SPICE_MSGC_TUNNEL_SERVICE_ADD = 101,
    SPICE_MSGC_TUNNEL_SERVICE_REMOVE,
    SPICE_MSGC_TUNNEL_SOCKET_OPEN_ACK,
    SPICE_MSGC_TUNNEL_SOCKET_OPEN_NACK,
    SPICE_MSGC_TUNNEL_SOCKET_FIN,
    SPICE_MSGC_TUNNEL_SOCKET_CLOSED,
    SPICE_MSGC_TUNNEL_SOCKET_CLOSED_ACK,
    SPICE_MSGC_TUNNEL_SOCKET_DATA,
    SPICE_MSGC_TUNNEL_SOCKET_TOKEN,

    SPICE_MSGC_END_TUNNEL
};

enum {
    SPICE_MSG_SMARTCARD_DATA = 101,

    SPICE_MSG_END_SMARTCARD
};

enum {
    SPICE_MSGC_SMARTCARD_DATA = 101,
    SPICE_MSGC_SMARTCARD_HEADER = 101,
    SPICE_MSGC_SMARTCARD_ERROR = 101,
    SPICE_MSGC_SMARTCARD_ATR = 101,
    SPICE_MSGC_SMARTCARD_READER_ADD = 101,

    SPICE_MSGC_END_SMARTCARD
};

enum {
    SPICE_MSG_SPICEVMC_DATA = 101,

    SPICE_MSG_END_SPICEVMC
};

enum {
    SPICE_MSGC_SPICEVMC_DATA = 101,

    SPICE_MSGC_END_SPICEVMC
};

enum {
    SPICE_MSG_PORT_INIT = 201,
    SPICE_MSG_PORT_EVENT,

    SPICE_MSG_END_PORT
};

enum {
    SPICE_MSGC_PORT_EVENT = 201,

    SPICE_MSGC_END_PORT
};

#endif /* _H_SPICE_ENUMS */
