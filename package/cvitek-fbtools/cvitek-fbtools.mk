################################################################################
#
# cvitek-config
#
################################################################################

#CVITEKFSBL_VERSION = 415722ebd855abef2ba11e9cba3d80106d250eff
CVITEK_FBTOOLS_SITE = $(BR2_EXTERNAL_LICHEERVNANO_BR_PATH)/package/cvitek-fbtools/fbtools
CVITEK_FBTOOLS_SITE_METHOD = local



define CVITEK_FBTOOLS_BUILD_CMDS
	CC=$(BR2_TOOLCHAIN_EXTERNAL_PREFIX)-gcc $(TARGET_MAKE_ENV) make  -C $(@D)/src all
endef

define CVITEK_FBTOOLS_INSTALL_TARGET_CMDS
	$(INSTALL) -D -m 0755 $(@D)/src/fbbar $(TARGET_DIR)/usr/bin/
	$(INSTALL) -D -m 0755 $(@D)/src/fbpattern $(TARGET_DIR)/usr/bin/
	$(INSTALL) -D -m 0755 $(@D)/src/fbdaemon $(TARGET_DIR)/usr/bin/
	$(INSTALL) -D -m 0755 $(@D)/etc/init.d/S05lcd $(TARGET_DIR)/etc/init.d/
endef

$(eval $(generic-package))