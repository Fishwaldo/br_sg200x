################################################################################
#
# AIC-firmware
#
################################################################################

AIC_FIRMWARE_VERSION = 4354d9a
AIC_FIRMWARE_SITE = https://github.com/armbian/firmware
AIC_FIRMWARE_SITE_METHOD = git



define AIC_FIRMWARE_INSTALL_TARGET_CMDS
	mkdir -p $(TARGET_DIR)/lib/firmware/aic8800
	cp -a $(@D)/aic8800/SDIO/aic8800/ $(TARGET_DIR)/lib/firmware/
endef

$(eval $(generic-package))
