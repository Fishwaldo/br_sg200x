################################################################################
#
# cvitek-modules
#
################################################################################

CVITEK_MODULES_VERSION = 5637fbf
CVITEK_MODULES_SITE = $(call github,sophgo,osdrv,$(CVITEK_MODULES_VERSION))
CVITEK_MODULES_LICENSE = GPL-2.0(kernel driver), Apache 2.0(userspace)
CVITEK_MODULES_INSTALL_STAGING = YES

CVITEK_MODULES_MODULE_MAKE_OPTS = CHIP_CODE=$(BR2_PACKAGE_CVITEKCONFIG_CHIPCODE)

CVITEK_MODULES_MODULE_SUBDIRS = interdrv/v2/sys 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/base 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/vcodec 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/jpeg 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/pwm 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/rtc 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/wdt 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/tpu 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/mon 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/clock_cooling 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/saradc 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/wiegand 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/vi 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/snsr_i2c 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/cif 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/vpss 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/dwa 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/rgn 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/vo 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/rtos_cmdqu 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/fast_image 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/cvi_vc_drv 
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/ive
CVITEK_MODULES_MODULE_SUBDIRS += interdrv/v2/fb
CVITEK_MODULES_MODULE_SUBDIRS += extdrv/tp/ts_gsl
CVITEK_MODULES_MODULE_SUBDIRS += extdrv/tp/ts_gt9xx
CVITEK_MODULES_MODULE_SUBDIRS += extdrv/wiegand-gpio
#CVITEK_MODULES_MODULE_SUBDIRS += extdrv/gyro_i2c
#CVITEK_MODULES_MODULE_SUBDIRS += extdrv/wireless/broadcom/bcmdhd
#CVITEK_MODULES_MODULE_SUBDIRS += extdrv/wireless/icommsemi/sv6115
#CVITEK_MODULES_MODULE_SUBDIRS += extdrv/wireless/mediatek/mt7603
#CVITEK_MODULES_MODULE_SUBDIRS += extdrv/wireless/realtek/rtl8188f
#CVITEK_MODULES_MODULE_SUBDIRS += extdrv/wireless/realtek/rtl8189fs
#CVITEK_MODULES_MODULE_SUBDIRS += extdrv/wireless/realtek/rtl8723ds
#CVITEK_MODULES_MODULE_SUBDIRS += extdrv/wireless/realtek/rtl8821cs
CVITEK_MODULES_MODULE_SUBDIRS += extdrv/wireless/aic8800/

define CVITEK_MODULES_INSTALL_STAGING_CMDS
	$(INSTALL) -D -m 0644 $(@D)/interdrv/v2/include/common/uapi/linux/* $(LINUX_DIR)/usr/include/linux/
	$(INSTALL) -D -m 0644 $(@D)/interdrv/v2/include/chip/$(BR2_PACKAGE_CVITEKCONFIG_CHIPCODE)/uapi/linux/* $(LINUX_DIR)/usr/include/linux
	$(info Staging Directory = $(STAGING_DIR))
endef


$(eval $(kernel-module))
$(eval $(generic-package))
