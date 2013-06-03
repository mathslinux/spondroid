LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

SYS_DIR = /android/sysroot/usr
SPICE_COMMON_PATH := spice-common
SPICE_GLIB_PATH := spice-glib
SPICE_PROTOCOL_PATH := $(abspath $(LOCAL_PATH)/spice-protocol)

LOCAL_MODULE := spice

SPICE_COMMON_SOURCE = \
	${SPICE_COMMON_PATH}/common/backtrace.c \
	${SPICE_COMMON_PATH}/common/canvas_utils.c \
	${SPICE_COMMON_PATH}/common/lines.c \
	${SPICE_COMMON_PATH}/common/log.c \
	${SPICE_COMMON_PATH}/common/lz.c \
	${SPICE_COMMON_PATH}/common/marshaller.c \
	${SPICE_COMMON_PATH}/common/mem.c \
	${SPICE_COMMON_PATH}/common/pixman_utils.c \
	${SPICE_COMMON_PATH}/common/quic.c \
	${SPICE_COMMON_PATH}/common/region.c \
	${SPICE_COMMON_PATH}/common/rop3.c \
	${SPICE_COMMON_PATH}/common/ssl_verify.c \
	${SPICE_COMMON_PATH}/common/generated_client_demarshallers.c \
	${SPICE_COMMON_PATH}/common/generated_client_demarshallers1.c \
	${SPICE_COMMON_PATH}/common/generated_client_marshallers.c \
	${SPICE_COMMON_PATH}/common/generated_client_marshallers1.c


SPICE_GLIB_SOURCE = \
	${SPICE_GLIB_PATH}/bio-gsocket.c \
	${SPICE_GLIB_PATH}/glib-compat.c \
	${SPICE_GLIB_PATH}/spice-util.c \
	${SPICE_GLIB_PATH}/spice-option.c \
	${SPICE_GLIB_PATH}/spice-client.c \
	${SPICE_GLIB_PATH}/spice-session.c \
	${SPICE_GLIB_PATH}/spice-channel.c \
	${SPICE_GLIB_PATH}/gio-coroutine.c \
	${SPICE_GLIB_PATH}/channel-base.c \
	${SPICE_GLIB_PATH}/channel-cursor.c \
	${SPICE_GLIB_PATH}/channel-display.c \
	${SPICE_GLIB_PATH}/channel-display-mjpeg.c \
	${SPICE_GLIB_PATH}/channel-inputs.c \
	${SPICE_GLIB_PATH}/channel-main.c \
	${SPICE_GLIB_PATH}/channel-port.c \
	${SPICE_GLIB_PATH}/channel-smartcard.c \
	${SPICE_GLIB_PATH}/channel-usbredir.c \
	${SPICE_GLIB_PATH}/smartcard-manager.c \
	${SPICE_GLIB_PATH}/spice-proxy.c \
	${SPICE_GLIB_PATH}/usb-device-manager.c \
	${SPICE_GLIB_PATH}/usbutil.c \
	${SPICE_GLIB_PATH}/decode-glz.c \
	${SPICE_GLIB_PATH}/decode-jpeg.c \
	${SPICE_GLIB_PATH}/decode-zlib.c \
	${SPICE_COMMON_PATH}/common/sw_canvas.c \
	${SPICE_GLIB_PATH}/wocky-http-proxy.c \
	${SPICE_GLIB_PATH}/spice-glib-enums.c \
	${SPICE_GLIB_PATH}/spice-marshal.c \
	${SPICE_GLIB_PATH}/coroutine_gthread.c \
	${SPICE_GLIB_PATH}/spice-audio.c

LOCAL_SRC_FILES := ${SPICE_COMMON_SOURCE} \
	${SPICE_GLIB_SOURCE}

LOCAL_C_INCLUDES += \
	${SPICE_PROTOCOL_PATH} \
	$(abspath $(LOCAL_PATH)/spice-common) \
	$(abspath $(LOCAL_PATH)/spice-glib) \
	$(SYS_DIR)/include \
	$(SYS_DIR)/include/pixman-1 \
	$(SYS_DIR)/include/glib-2.0 \
	$(SYS_DIR)/lib/glib-2.0/include

LOCAL_CFLAGS += \
	-DSW_CANVAS_CACHE \
	-std=gnu99 \
	-DHAVE_CONFIG_H

LOCAL_LDLIBS += \
	$(SYS_DIR)/lib/libgio-2.0.a \
	$(SYS_DIR)/lib/libgobject-2.0.a  \
	$(SYS_DIR)/lib/libgthread-2.0.a  \
	$(SYS_DIR)/lib/libgmodule-2.0.a \
	$(SYS_DIR)/lib/libglib-2.0.a  \
	$(SYS_DIR)/lib/libiconv.a  \
	$(SYS_DIR)/lib/libjpeg.a   \
	$(SYS_DIR)/lib/libpixman-1.a \
	$(SYS_DIR)/lib/libssl.a \
	$(SYS_DIR)/lib/libcrypto.a \
	$(SYS_DIR)/lib/libffi.a \
	$(SYS_DIR)/lib/libgettextpo.a \
	$(SYS_DIR)/lib/libintl.a \
	-lz -lc -ldl -llog -ljnigraphics

include $(BUILD_SHARED_LIBRARY)
