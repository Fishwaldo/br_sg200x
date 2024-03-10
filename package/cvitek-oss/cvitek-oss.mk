CVITEK_OSS_VERSION = 59b6a54
CVITEK_OSS_SITE =  $(call github,sophgo,oss,$(CVITEK_OSS_VERSION))
CVITEK_OSS_LICENSE = GPL-3.0
CVITEK_OSS_DEPENDENCIES = host-tar cvitekconfig
CVITEK_OSS_INSTALL_STAGING = YES


define CVITEK_OSS_BUILD_CMDS
	@echo "Extracting CVITEK OSS tarballs - cvi_json-c cvi_miniz"
	@rm -rf $(@D)/output
	@mkdir -p $(@D)/output
	@$(TAR) --no-same-owner -xzf $(@D)/oss_release_tarball/$(BR2_PACKAGE_CVITEKCONFIG_LIBC)_$(BR2_ARCH)/cvi-json-c.tar.gz -C $(@D)/output
	@$(TAR) --no-same-owner -xzf $(@D)/oss_release_tarball/$(BR2_PACKAGE_CVITEKCONFIG_LIBC)_$(BR2_ARCH)/cvi-miniz.tar.gz -C $(@D)/output
endef

define CVITEK_OSS_INSTALL_STAGING_CMDS
	@$(INSTALL) -d -m 0755 $(STAGING_DIR)/usr/include/cvi_json-c
	@$(INSTALL) -m 0644 $(@D)/output/include/cvi_json-c/*.h $(STAGING_DIR)/usr/include/cvi_json-c

	@$(INSTALL) -d -m 0755 $(STAGING_DIR)/usr/lib/cmake/cvi_json-c
	@$(INSTALL) -m 0644 $(@D)/output/lib/cmake/cvi_json-c/* $(STAGING_DIR)/usr/lib/cmake/cvi_json-c

	@$(INSTALL) -d -m 0755 $(STAGING_DIR)/usr/lib/pkgconfig
	@$(INSTALL) -m 0644 $(@D)/output/lib/pkgconfig/* $(STAGING_DIR)/usr/lib/pkgconfig
	@$(INSTALL) -m 0644 $(@D)/output/share/pkgconfig/* $(STAGING_DIR)/usr/lib/pkgconfig

	@$(INSTALL) -d -m 0755 $(STAGING_DIR)/usr/include/cvi_miniz
	@$(INSTALL) -m 0644 $(@D)/output/include/cvi_miniz/*.h $(STAGING_DIR)/usr/include/cvi_miniz

	@$(INSTALL) -m 0755 $(@D)/output/lib/lib* $(STAGING_DIR)/usr/lib
endef

define CVITEK_OSS_INSTALL_TARGET_CMDS
	@$(INSTALL) -m 0755 $(@D)/output/lib/lib* $(TARGET_DIR)/usr/lib
endef

$(eval $(generic-package))