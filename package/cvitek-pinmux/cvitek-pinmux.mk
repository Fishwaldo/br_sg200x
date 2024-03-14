################################################################################
#
# cvitek-config
#
################################################################################

#CVITEKFSBL_VERSION = 415722ebd855abef2ba11e9cba3d80106d250eff
CVITEK_PINMUX_SITE = $(BR2_EXTERNAL_LICHEERVNANO_BR_PATH)/package/cvitek-pinmux/pinmux
CVITEK_PINMUX_SITE_METHOD = local


define CVITEK_PINMUX_BUILD_CMDS
	CC=$(BR2_TOOLCHAIN_EXTERNAL_PREFIX)-gcc $(TARGET_MAKE_ENV) make  -C $(@D) all
endef

define CVITEK_PINMUX_INSTALL_TARGET_CMDS
	$(INSTALL) -D -m 0755 $(@D)/cvi_pinmux $(TARGET_DIR)/usr/bin/
endef

$(eval $(generic-package))