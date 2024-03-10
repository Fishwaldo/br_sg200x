CVITEK_MIDDLEWARE_VERSION = b70217f
CVITEK_MIDDLEWARE_SITE =  $(call github,sophgo,middleware,$(CVITEK_MIDDLEWARE_VERSION))
CVITEK_MIDDLEWARE_LICENSE = GPL-3.0
CVITEK_MIDDLEWARE_DEPENDENCIES = cvitek-modules miniz json-c tinyalsa cvitek-oss cvitekconfig
CVITEK_MIDDLEWARE_INSTALL_STAGING = YES
UCCHIPARCH = $(shell echo '$(BR2_PACKAGE_CVITEKCONFIG_CHIP_ARCH)' | tr '[:lower:]' '[:upper:]')

CVITEK_MIDDLEWARE_MAKE_OPTS = \
	CROSS_COMPILE=$(BR2_TOOLCHAIN_EXTERNAL_PREFIX)- \
	PROJECT_FULLNAME=$(BR2_PACKAGE_CVITEKCONFIG_CHIP_ARCH)_$(BR2_PACKAGE_CVITEKCONFIG_BOARD_NAME) \
	SDK_VER=$(BR2_PACKAGE_CVITEKCONFIG_LIBC)_$(BR2_ARCH) \
	CHIP_ARCH=$(UCCHIPARCH) \
	BUILD_PATH=$(@D) \
	KERNEL_DIR=$(LINUX_DIR)/usr/include/ \
	SYSROOT_DIR=$(STAGING_DIR) \
	MW_VER=v2 


CVITEK_MIDDLEWARE_DISABLED_SENSORS = SENSOR_GCORE_GC02M1 \
	SENSOR_GCORE_GC2093_SLAVE \
	SENSOR_GCORE_GC4653_SLAVE \
	SENSOR_OV_OS02D10 \
	SENSOR_OV_OS02D10_SLAVE \
	SENSOR_OV_OS02K10_SLAVE \
	SENSOR_OV_OS04C10_SLAVE \
	SENSOR_OV_OS08A20_SLAVE \
	SENSOR_PICO_384 \
	SENSOR_PICO_640 \
	SENSOR_SMS_SC850SL \
	SENSOR_VIVO_MM308M2 \
	SENSOR_VIVO_MCS369Q \
	SENSOR_VIVO_MCS369 \
	SENSOR_TECHPOINT_TP2850 \
	SENSOR_SONY_IMX385 \
	SENSOR_SONY_IMX334 \
	SENSOR_SONY_IMX347 \
	SENSOR_SONY_IMX307_SUBLVDS \
	SENSOR_SONY_IMX290_2L \
	SENSOR_SOI_H65 \
	SENSOR_SOI_F35_SLAVE \
	SENSOR_SMS_SC8238 \
	SENSOR_SMS_SC4210 \
	SENSOR_SMS_SC3335_SLAVE

CVITEK_MIDDLEWARE_RM_FILES = v2/lib/libjson-c.* \
	v2/modules/audio/lib/musl_riscv64/libtinyalsa.* \
	v2/modules/isp/lib/musl_riscv64/libjson-c.* 


CVITEK_MIDDLEWARE_BIN_FILES = v2/sample/audio/sample_audio \
	v2/sample/fisheye/sample_fisheye \
	v2/sample/ir_auto/ir_auto \
	v2/sample/ive/sample_* \
	v2/sample/mipi_tx/sample_dsi \
	v2/sample/osdc/sample_osdc \
	v2/sample/overlay/sample_overlay \
	v2/sample/region/sample_region \
	v2/sample/sample_panel/sample_panel \
	v2/sample/scene_auto/sample_scene_auto \
	v2/sample/sensor_test/sensor_test \
	v2/sample/vdec/sample_vdec \
	v2/sample/vdecvo/sample_vdecvo \
	v2/sample/venc/sample_vcodec \
	v2/sample/venc/sample_venc \
	v2/sample/vio/sample_vio

define CVITEK_MIDDLEWARE_BUILD_CMDS
	cat $(@D)/v2/component/isp/sensor.mk | grep CONFIG | awk '{sub(/.*[(]/,""); sub(/[)].*/,""); print $$0"=y"}' | sort | uniq > $(@D)/.config
	sed -i 's/SENSOR_GCORE_GC02M1=y/SENSOR_GCORE_GC02M1=n/' $(@D)/.config
	$(foreach SENSOR,$(CVITEK_MIDDLEWARE_DISABLED_SENSORS),sed -i 's/$(SENSOR)=y/$(SENSOR)=n/' $(@D)/.config;)
	$(foreach FILE,$(CVITEK_MIDDLEWARE_RM_FILES),rm -f $(@D)/$(FILE);)
	ln -f -s $(@D)/v2/Makefile.param $(@D)/Makefile.param
	#V=1 $(TARGET_MAKE_ENV) $(CVITEK_MIDDLEWARE_MAKE_OPTS) make  -C $(@D)/v2 clean
	V=1 $(TARGET_MAKE_ENV) $(CVITEK_MIDDLEWARE_MAKE_OPTS) make  -C $(@D)/v2 all
endef

define CVITEK_MIDDLEWARE_INSTALL_STAGING_CMDS
	@$(INSTALL) -m 0644 $(@D)/v2/include/*.h $(STAGING_DIR)/usr/include/
	@$(INSTALL) -m 0644 $(@D)/v2/include/isp/$(BR2_PACKAGE_CVITEKCONFIG_CHIP_ARCH)/*.h $(STAGING_DIR)/usr/include/
	@$(INSTALL) -m 0755 $(@D)/v2/lib/lib* $(STAGING_DIR)/usr/lib/
	@$(INSTALL) -m 0755 $(@D)/v2/lib/3rd/lib* $(STAGING_DIR)/usr/lib/
endef

define CVITEK_MIDDLEWARE_INSTALL_TARGET_CMDS
	@$(INSTALL) -m 0755 $(@D)/v2/lib/lib* $(TARGET_DIR)/usr/lib/
	@$(INSTALL) -m 0755 $(@D)/v2/lib/3rd/lib* $(TARGET_DIR)/usr/lib
	$(foreach BINFILE,$(CVITEK_MIDDLEWARE_BIN_FILES), $(INSTALL) -m 0755 $(@D)/$(BINFILE) $(TARGET_DIR)/usr/bin/;)
endef

$(eval $(generic-package))