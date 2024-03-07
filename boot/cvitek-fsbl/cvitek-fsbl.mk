################################################################################
#
# cvitek-fsbl
#
################################################################################

CVITEK_FSBL_VERSION = 415722ebd855abef2ba11e9cba3d80106d250eff
CVITEK_FSBL_SITE = $(call github,sophgo,fsbl,$(CVITEK_FSBL_VERSION))
CVITEK_FSBL_LICENSE = GPL-2.0
CVITEK_FSBL_DEPENDENCIES = linux opensbi uboot
CVITEK_FSBL_INSTALL_IMAGES = YES


CVITEK_FSBL_MAKE_ENV = \
        CROSS_COMPILE=$(TARGET_CROSS) \
		CROSS_COMPILE_GLIBC_RISCV64=$(TARGET_CROSS) \
		CHIP_ARCH=sg200x \
		ARCH=riscv \
		DDR_CFG=ddr3_1866_x16 \
		FW_DYNAMIC=$(BINARIES_DIR)/fw_dynamic.bin


define CVITEK_FSBL_BUILD_CMDS
	$(CVITEK_FSBL_MAKE_ENV) $(MAKE) -C $(@D) CFLAGS="-fno-stack-protector" LOADER_2ND_PATH=$(BINARIES_DIR)/u-boot.bin
endef

define CVITEK_FSBL_INSTALL_IMAGES_CMDS
	$(INSTALL) -D -m 0755 $(@D)/build/sg200x/fip.bin $(BINARIES_DIR)/fip.bin
endef

$(eval $(generic-package))
