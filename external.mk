include $(sort $(wildcard $(BR2_EXTERNAL_LICHEERVNANO_BR_PATH)/package/*/*.mk))
include $(sort $(wildcard $(BR2_EXTERNAL_LICHEERVNANO_BR_PATH)/boot/*/*.mk))

UBOOT_POST_PATCH_HOOKS += UBOOT_APPLY_SG2002_CONFIG_HOOK
LINUX_POST_PATCH_HOOKS += LINUX_APPLY_SG2002_CONFIG_HOOK
CVITEK_FSBL_POST_PATCH_HOOKS += CVITEK_FSBL_APPLY_SG2002_CONFIG_HOOK

define UBOOT_APPLY_SG2002_CONFIG_HOOK
	@echo "Applying SG2002 Generated Config" 
	@cp $(BR2_GLOBAL_PATCH_DIR)../generated/cvi_board_memmap.h $(@D)/include/cvi_board_memmap.h
	@cp $(BR2_GLOBAL_PATCH_DIR)../generated/cvipart.h $(@D)/include/cvipart.h
	@cp $(BR2_GLOBAL_PATCH_DIR)../generated/uboot/cvi_board_init.c $(@D)/board/cvitek/
endef

define LINUX_APPLY_SG2002_CONFIG_HOOK
	@echo "Applying SG2002 Generated Config" 
	@cp $(BR2_GLOBAL_PATCH_DIR)../generated/cvi_board_memmap.h $(@D)/include/cvi_board_memmap.h
	@cp $(BR2_GLOBAL_PATCH_DIR)../generated/cvipart.h $(@D)/include/cvipart.h
endef

define CVITEK_FSBL_APPLY_SG2002_CONFIG_HOOK
	@echo "Applying SG2002 Generated Config" 
	@cp $(BR2_GLOBAL_PATCH_DIR)../generated/cvi_board_memmap.h $(@D)/include/cvi_board_memmap.h
endef
