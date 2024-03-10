################################################################################
#
# cvitek-config
#
################################################################################

#CVITEKFSBL_VERSION = 415722ebd855abef2ba11e9cba3d80106d250eff
CVITEKCONFIG_SITE = $(BR2_EXTERNAL_LICHEERVNANO_BR_PATH)/package/cvitekconfig/genconfig
CVITEKCONFIG_SITE_METHOD = local
CVITEKCONFIG_LICENSE = GPL-2.0
CVITEKCONFIG_DEPENDENCIES = host-python3

ifeq ($(BR2_PACKAGE_CVITEKCONFIG_BOARD_LICHEERVNANO),y)
	CVITEKCONFIG_BOARD = licheervnano
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_BOARD_TEST),y)
	CVITEKCONFIG_BOARD = test
endif

ifdef BR2_PACKAGE_CVITEKCONFIG_ALLOCATE_FREERTOS_HEAP
define CVITEKCONFIG_SETFREERTOS
	@echo "set FREERTOS_SIZE to $(BR2_PACKAGE_CVITEKCONFIG_ALLOCATE_FREERTOS_HEAP)"
	@$(SED) 's/FREERTOS_SIZE = [[:digit:]]\+ \* SIZE_1M/FREERTOS_SIZE = $(BR2_PACKAGE_CVITEKCONFIG_ALLOCATE_FREERTOS_HEAP) \* SIZE_1M/g' $(@D)//memmap.py
endef
endif

ifdef BR2_PACKAGE_CVITEKCONFIG_ALLOCATE_ION_HEAP
define CVITEKCONFIG_SETION
	@echo "set ION_SIZE to $(BR2_PACKAGE_CVITEKCONFIG_ALLOCATE_ION_HEAP)"
	@$(SED) 's/ION_SIZE = [[:digit:]]\+ \* SIZE_1M/ION_SIZE = $(BR2_PACKAGE_CVITEKCONFIG_ALLOCATE_ION_HEAP) \* SIZE_1M/g' $(@D)//memmap.py
endef
endif

ifdef BR2_PACKAGE_CVITEKCONFIG_ALLOCATE_H26X_BITSTREAM_HEAP
define CVITEKCONFIG_SETH26X
	@echo "set H26X_BITSTREAM_SIZE to $(BR2_PACKAGE_CVITEKCONFIG_ALLOCATE_H26X_BITSTREAM_HEAP)"
	@$(SED) 's/H26X_BITSTREAM_SIZE = [[:digit:]]\+ \* SIZE_1M/H26X_BITSTREAM_SIZE = $(BR2_PACKAGE_CVITEKCONFIG_ALLOCATE_H26X_BITSTREAM_HEAP) \* SIZE_1M/g' $(@D)//memmap.py
endef
endif

ifdef BR2_PACKAGE_CVITEKCONFIG_ALLOCATE_ISP_HEAP
define CVITEKCONFIG_SETISP
	@echo "set ISP_MEM_BASE_SIZE to $(BR2_PACKAGE_CVITEKCONFIG_ALLOCATE_ISP_HEAP)"
	@$(SED) 's/ISP_MEM_BASE_SIZE = [[:digit:]]\+ \* SIZE_1M/ISP_MEM_BASE_SIZE = $(BR2_PACKAGE_CVITEKCONFIG_ALLOCATE_ISP_HEAP) \* SIZE_1M/g' $(@D)//memmap.py
endef
endif

define CVITEKCONFIG_BUILD_CMDS
	@echo "CVITEKCONFIG_BUILD_CMDS - $(CVITEKCONFIG_BOARD)"
	@cp $(@D)/$(CVITEKCONFIG_BOARD)/memmap.py $(@D)/memmap.py
	$(CVITEKCONFIG_SETFREERTOS)
	$(CVITEKCONFIG_SETION)
	$(CVITEKCONFIG_SETH26X)
	$(CVITEKCONFIG_SETISP)
	@$(PYTHON) $(@D)/mmap_conv.py --type h $(@D)/memmap.py $(@D)/cvi_board_memmap.h
	@$(PYTHON) $(@D)/mmap_conv.py --type ld $(@D)/memmap.py $(@D)/cvi_board_memmap.ld
	@$(PYTHON) $(@D)/mmap_conv.py --type conf $(@D)/memmap.py $(@D)/cvi_board_memmap.conf
endef

define CVITEKCONFIG_INSTALL_TARGET_CMDS
	$(INSTALL) -D -m 0644 $(@D)/cvi_board_memmap.h $(TARGET_DIR)/include/cvi_board_memmap.h
	$(INSTALL) -D -m 0644 $(@D)/cvi_board_memmap.ld $(TARGET_DIR)/include/cvi_board_memmap.ld
	$(INSTALL) -D -m 0644 $(@D)/cvi_board_memmap.conf $(TARGET_DIR)/include/cvi_board_memmap.conf
endef


ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_ZCT2133V1),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_ZCT2133V1
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_HX8394),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_HX8394
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_ILI9881C),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_ILI9881C
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_ILI9881D),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_ILI9881D
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_JD9366AB),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_JD9366AB
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_NT35521),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_NT35521
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_OTA7290B),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_OTA7290B
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_ST7701_D300FPC9307A),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_ST7701_D300FPC9307A
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_OTA7290B_1920),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_OTA7290B_1920
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_ICN9707),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_ICN9707
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_ST7701_DXQ5D0019B480854),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_ST7701_DXQ5D0019B480854
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_3AML069LP01G),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_3AML069LP01G
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_ST7701 ),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_ST7701
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_ST7701_HD228001C31),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_ST7701_HD228001C31
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_ST7785M),y)
	UBOOT_PANEL_TUNING_PARM=MIPI_PANEL_ST7785M
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_ST7789V),y)
	UBOOT_PANEL_TUNING_PARM=I80_PANEL_ST7789V
else ifeq ($(BR2_PACKAGE_CVITEKCONFIG_PANEL_EK79202),y)
	UBOOT_PANEL_TUNING_PARM=LVDS_PANEL_EK79202
endif




#hook into the other builds. Dependancies don't really work, so we must make cvitekconfig as the first command. 

UBOOT_POST_PATCH_HOOKS += UBOOT_APPLY_CVITEK_CONFIG_HOOK
UBOOT_DEPENDENCIES += cvitekconfig
LINUX_POST_PATCH_HOOKS += LINUX_APPLY_CVITEK_CONFIG_HOOK
LINUX_POST_INSTALL_TARGET_HOOKS += LINUX_ADDITIONAL_INSTALL_STAGING_HOOK
LINUX_DEPENDENCIES += cvitekconfig
CVITEKFSBL_POST_PATCH_HOOKS += CVITEKFSBL_APPLY_CVITEK_CONFIG_HOOK
CVITEKFSBL_DEPENDENCIES += cvitekconfig

define UBOOT_APPLY_CVITEK_CONFIG_HOOK
	@echo "Applying CVITEK Generated Config" 
	$(INSTALL) -D -m 0644 $(TARGET_DIR)/include/cvi_board_memmap.h $(@D)/include/cvi_board_memmap.h
	$(INSTALL) -D -m 0644 $(BR2_GLOBAL_PATCH_DIR)../generated/cvipart.h $(@D)/include/cvipart.h
	$(INSTALL) -D -m 0644 $(BR2_GLOBAL_PATCH_DIR)../generated/uboot/cvi_board_init.c $(@D)/board/cvitek/
endef

define LINUX_APPLY_CVITEK_CONFIG_HOOK
	@echo "Applying SG2002 Generated Config" 
	$(INSTALL) -D -m 0644 $(TARGET_DIR)/include/cvi_board_memmap.h $(@D)/include/cvi_board_memmap.h
	$(INSTALL) -D -m 0644 $(BR2_GLOBAL_PATCH_DIR)../generated/cvipart.h $(@D)/include/cvipart.h
endef

define LINUX_ADDITIONAL_INSTALL_STAGING_HOOK
	@echo "Installing Kernel Headers"
	V=1 $(LINUX_MAKE_ENV) $(BR2_MAKE) $(LINUX_MAKE_FLAGS) -C $(LINUX_DIR) V=1 headers_install
	$(INSTALL) -D -m 0644 $(@D)/drivers/staging/android/uapi/ion*.h $(LINUX_DIR)/usr/include/linux/
	#Makefile:	${Q}cp ${KERNEL_PATH}/include/uapi/linux/dma-buf.h ${1}/linux/
endef


define CVITEKFSBL_APPLY_CVITEK_CONFIG_HOOK
	@echo "Applying SG2002 Generated Config" 
	$(INSTALL) -D -m 0644 $(TARGET_DIR)/include/cvi_board_memmap.h $(@D)/include/cvi_board_memmap.h
endef




$(eval $(generic-package))
