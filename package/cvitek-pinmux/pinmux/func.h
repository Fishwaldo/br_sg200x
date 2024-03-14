struct funlist {
	char name[32];
	char func[32];
} funlist_st;

struct funlist cv181x_pin_func[] = {
	{ "CAM_MCLK00", "CAM_MCLK0"},
	{ "CAM_MCLK02", "AUX1"},
	{ "CAM_MCLK03", "XGPIOA_0"},
	{ "CAM_PD01", "IIS1_MCLK"},
	{ "CAM_PD03", "XGPIOA_1"},
	{ "CAM_PD04", "CAM_HS0"},
	{ "CAM_RST03", "XGPIOA_2"},
	{ "CAM_RST04", "CAM_VS0"},
	{ "CAM_RST06", "IIC4_SCL"},
	{ "CAM_MCLK10", "CAM_MCLK1"},
	{ "CAM_MCLK12", "AUX2"},
	{ "CAM_MCLK13", "XGPIOA_3"},
	{ "CAM_MCLK14", "CAM_HS0"},
	{ "CAM_PD11", "IIS1_MCLK"},
	{ "CAM_PD13", "XGPIOA_4"},
	{ "CAM_PD14", "CAM_VS0"},
	{ "CAM_PD16", "IIC4_SDA"},
	{ "IIC3_SCL0", "IIC3_SCL"},
	{ "IIC3_SCL3", "XGPIOA_5"},
	{ "IIC3_SDA0", "IIC3_SDA"},
	{ "IIC3_SDA3", "XGPIOA_6"},
	{ "SD0_CLK0", "SDIO0_CLK"},
	{ "SD0_CLK1", "IIC1_SDA"},
	{ "SD0_CLK2", "SPI0_SCK"},
	{ "SD0_CLK3", "XGPIOA_7"},
	{ "SD0_CLK5", "PWM_15"},
	{ "SD0_CLK6", "EPHY_LNK_LED"},
	{ "SD0_CLK7", "DBG_0"},
	{ "SD0_CMD0", "SDIO0_CMD"},
	{ "SD0_CMD1", "IIC1_SCL"},
	{ "SD0_CMD2", "SPI0_SDO"},
	{ "SD0_CMD3", "XGPIOA_8"},
	{ "SD0_CMD5", "PWM_14"},
	{ "SD0_CMD6", "EPHY_SPD_LED"},
	{ "SD0_CMD7", "DBG_1"},
	{ "SD0_D00", "SDIO0_D_0"},
	{ "SD0_D01", "CAM_MCLK1"},
	{ "SD0_D02", "SPI0_SDI"},
	{ "SD0_D03", "XGPIOA_9"},
	{ "SD0_D04", "UART3_TX"},
	{ "SD0_D05", "PWM_13"},
	{ "SD0_D06", "WG0_D0"},
	{ "SD0_D07", "DBG_2"},
	{ "SD0_D10", "SDIO0_D_1"},
	{ "SD0_D11", "IIC1_SDA"},
	{ "SD0_D12", "AUX0"},
	{ "SD0_D13", "XGPIOA_10"},
	{ "SD0_D14", "UART1_TX"},
	{ "SD0_D15", "PWM_12"},
	{ "SD0_D16", "WG0_D1"},
	{ "SD0_D17", "DBG_3"},
	{ "SD0_D20", "SDIO0_D_2"},
	{ "SD0_D21", "IIC1_SCL"},
	{ "SD0_D22", "AUX1"},
	{ "SD0_D23", "XGPIOA_11"},
	{ "SD0_D24", "UART1_RX"},
	{ "SD0_D25", "PWM_11"},
	{ "SD0_D26", "WG1_D0"},
	{ "SD0_D27", "DBG_4"},
	{ "SD0_D30", "SDIO0_D_3"},
	{ "SD0_D31", "CAM_MCLK0"},
	{ "SD0_D32", "SPI0_CS_X"},
	{ "SD0_D33", "XGPIOA_12"},
	{ "SD0_D34", "UART3_RX"},
	{ "SD0_D35", "PWM_10"},
	{ "SD0_D36", "WG1_D1"},
	{ "SD0_D37", "DBG_5"},
	{ "SD0_CD0", "SDIO0_CD"},
	{ "SD0_CD3", "XGPIOA_13"},
	{ "SD0_PWR_EN0", "SDIO0_PWR_EN"},
	{ "SD0_PWR_EN3", "XGPIOA_14"},
	{ "SPK_EN3", "XGPIOA_15"},
	{ "UART0_TX0", "UART0_TX"},
	{ "UART0_TX1", "CAM_MCLK1"},
	{ "UART0_TX2", "PWM_4"},
	{ "UART0_TX3", "XGPIOA_16"},
	{ "UART0_TX4", "UART1_TX"},
	{ "UART0_TX5", "AUX1"},
	{ "UART0_TX7", "DBG_6"},
	{ "UART0_RX0", "UART0_RX"},
	{ "UART0_RX1", "CAM_MCLK0"},
	{ "UART0_RX2", "PWM_5"},
	{ "UART0_RX3", "XGPIOA_17"},
	{ "UART0_RX4", "UART1_RX"},
	{ "UART0_RX5", "AUX0"},
	{ "UART0_RX7", "DBG_7"},
	{ "EMMC_RSTN0", "EMMC_RSTN"},
	{ "EMMC_RSTN3", "XGPIOA_21"},
	{ "EMMC_RSTN4", "AUX2"},
	{ "EMMC_DAT20", "EMMC_DAT_2"},
	{ "EMMC_DAT21", "SPINOR_HOLD_X"},
	{ "EMMC_DAT22", "SPINAND_HOLD"},
	{ "EMMC_DAT23", "XGPIOA_26"},
	{ "EMMC_CLK0", "EMMC_CLK"},
	{ "EMMC_CLK1", "SPINOR_SCK"},
	{ "EMMC_CLK2", "SPINAND_CLK"},
	{ "EMMC_CLK3", "XGPIOA_22"},
	{ "EMMC_DAT00", "EMMC_DAT_0"},
	{ "EMMC_DAT01", "SPINOR_MOSI"},
	{ "EMMC_DAT02", "SPINAND_MOSI"},
	{ "EMMC_DAT03", "XGPIOA_25"},
	{ "EMMC_DAT30", "EMMC_DAT_3"},
	{ "EMMC_DAT31", "SPINOR_WP_X"},
	{ "EMMC_DAT32", "SPINAND_WP"},
	{ "EMMC_DAT33", "XGPIOA_27"},
	{ "EMMC_CMD0", "EMMC_CMD"},
	{ "EMMC_CMD1", "SPINOR_MISO"},
	{ "EMMC_CMD2", "SPINAND_MISO"},
	{ "EMMC_CMD3", "XGPIOA_23"},
	{ "EMMC_DAT10", "EMMC_DAT_1"},
	{ "EMMC_DAT11", "SPINOR_CS_X"},
	{ "EMMC_DAT12", "SPINAND_CS"},
	{ "EMMC_DAT13", "XGPIOA_24"},
	{ "JTAG_CPU_TMS0", "CV_2WTMS_CR_4WTMS"},
	{ "JTAG_CPU_TMS1", "CAM_MCLK0"},
	{ "JTAG_CPU_TMS2", "PWM_7"},
	{ "JTAG_CPU_TMS3", "XGPIOA_19"},
	{ "JTAG_CPU_TMS4", "UART1_RTS"},
	{ "JTAG_CPU_TMS5", "AUX0"},
	{ "JTAG_CPU_TMS6", "UART1_TX"},
	{ "JTAG_CPU_TMS7", "VO_D_28"},
	{ "JTAG_CPU_TCK0", "CV_2WTCK_CR_4WTCK"},
	{ "JTAG_CPU_TCK1", "CAM_MCLK1"},
	{ "JTAG_CPU_TCK2", "PWM_6"},
	{ "JTAG_CPU_TCK3", "XGPIOA_18"},
	{ "JTAG_CPU_TCK4", "UART1_CTS"},
	{ "JTAG_CPU_TCK5", "AUX1"},
	{ "JTAG_CPU_TCK6", "UART1_RX"},
	{ "JTAG_CPU_TCK7", "VO_D_29"},
	{ "JTAG_CPU_TRST0", "JTAG_CPU_TRST"},
	{ "JTAG_CPU_TRST3", "XGPIOA_20"},
	{ "JTAG_CPU_TRST6", "VO_D_30"},
	{ "IIC0_SCL0", "CV_SCL0"},
	{ "IIC0_SCL1", "UART1_TX"},
	{ "IIC0_SCL2", "UART2_TX"},
	{ "IIC0_SCL3", "XGPIOA_28"},
	{ "IIC0_SCL5", "WG0_D0"},
	{ "IIC0_SCL7", "DBG_10"},
	{ "IIC0_SDA0", "CV_SDA0"},
	{ "IIC0_SDA1", "UART1_RX"},
	{ "IIC0_SDA2", "UART2_RX"},
	{ "IIC0_SDA3", "XGPIOA_29"},
	{ "IIC0_SDA5", "WG0_D1"},
	{ "IIC0_SDA6", "WG1_D0"},
	{ "IIC0_SDA7", "DBG_11"},
	{ "AUX00", "AUX0"},
	{ "AUX03", "XGPIOA_30"},
	{ "AUX04", "IIS1_MCLK"},
	{ "AUX05", "VO_D_31"},
	{ "AUX06", "WG1_D1"},
	{ "AUX07", "DBG_12"},
	{ "PWR_VBAT_DET0", "PWR_VBAT_DET"},
	{ "PWR_RSTN0", "PWR_RSTN"},
	{ "PWR_SEQ10", "PWR_SEQ1"},
	{ "PWR_SEQ13", "PWR_GPIO_3"},
	{ "PWR_SEQ20", "PWR_SEQ2"},
	{ "PWR_SEQ23", "PWR_GPIO_4"},
	{ "PWR_SEQ30", "PWR_SEQ3"},
	{ "PWR_SEQ33", "PWR_GPIO_5"},
	{ "PTEST0", "PWR_PTEST"},
	{ "PWR_WAKEUP00", "PWR_WAKEUP0"},
	{ "PWR_WAKEUP01", "PWR_IR0"},
	{ "PWR_WAKEUP02", "PWR_UART0_TX"},
	{ "PWR_WAKEUP03", "PWR_GPIO_6"},
	{ "PWR_WAKEUP04", "UART1_TX"},
	{ "PWR_WAKEUP05", "IIC4_SCL"},
	{ "PWR_WAKEUP06", "EPHY_LNK_LED"},
	{ "PWR_WAKEUP07", "WG2_D0"},
	{ "PWR_WAKEUP10", "PWR_WAKEUP1"},
	{ "PWR_WAKEUP11", "PWR_IR1"},
	{ "PWR_WAKEUP13", "PWR_GPIO_7"},
	{ "PWR_WAKEUP14", "UART1_TX"},
	{ "PWR_WAKEUP15", "IIC4_SCL"},
	{ "PWR_WAKEUP16", "EPHY_LNK_LED"},
	{ "PWR_WAKEUP17", "WG0_D0"},
	{ "PWR_BUTTON10", "PWR_BUTTON1"},
	{ "PWR_BUTTON13", "PWR_GPIO_8"},
	{ "PWR_BUTTON14", "UART1_RX"},
	{ "PWR_BUTTON15", "IIC4_SDA"},
	{ "PWR_BUTTON16", "EPHY_SPD_LED"},
	{ "PWR_BUTTON17", "WG2_D1"},
	{ "PWR_ON0", "PWR_ON"},
	{ "PWR_ON3", "PWR_GPIO_9"},
	{ "PWR_ON4", "UART1_RX"},
	{ "PWR_ON5", "IIC4_SDA"},
	{ "PWR_ON6", "EPHY_SPD_LED"},
	{ "PWR_ON7", "WG0_D1"},
	{ "XTAL_XIN0", "PWR_XTAL_CLKIN"},
	{ "PWR_GPIO00", "PWR_GPIO_0"},
	{ "PWR_GPIO01", "UART2_TX"},
	{ "PWR_GPIO02", "PWR_UART0_RX"},
	{ "PWR_GPIO04", "PWM_8"},
	{ "PWR_GPIO10", "PWR_GPIO_1"},
	{ "PWR_GPIO11", "UART2_RX"},
	{ "PWR_GPIO13", "EPHY_LNK_LED"},
	{ "PWR_GPIO14", "PWM_9"},
	{ "PWR_GPIO15", "PWR_IIC_SCL"},
	{ "PWR_GPIO16", "IIC2_SCL"},
	{ "PWR_GPIO17", "CV_4WTMS_CR_SDA0"},
	{ "PWR_GPIO20", "PWR_GPIO_2"},
	{ "PWR_GPIO22", "PWR_SECTICK"},
	{ "PWR_GPIO23", "EPHY_SPD_LED"},
	{ "PWR_GPIO24", "PWM_10"},
	{ "PWR_GPIO25", "PWR_IIC_SDA"},
	{ "PWR_GPIO26", "IIC2_SDA"},
	{ "PWR_GPIO27", "CV_4WTCK_CR_2WTCK"},
	{ "CLK32K0", "CLK32K"},
	{ "CLK32K1", "AUX0"},
	{ "CLK32K2", "CV_4WTDI_CR_SCL0"},
	{ "CLK32K3", "PWR_GPIO_10"},
	{ "CLK32K4", "PWM_2"},
	{ "CLK32K5", "KEY_COL0"},
	{ "CLK32K6", "CAM_MCLK0"},
	{ "CLK32K7", "DBG_0"},
	{ "CLK25M0", "CLK25M"},
	{ "CLK25M1", "AUX1"},
	{ "CLK25M2", "CV_4WTDO_CR_2WTMS"},
	{ "CLK25M3", "PWR_GPIO_11"},
	{ "CLK25M4", "PWM_3"},
	{ "CLK25M5", "KEY_COL1"},
	{ "CLK25M6", "CAM_MCLK1"},
	{ "CLK25M7", "DBG_1"},
	{ "IIC2_SCL0", "IIC2_SCL"},
	{ "IIC2_SCL1", "PWM_14"},
	{ "IIC2_SCL3", "PWR_GPIO_12"},
	{ "IIC2_SCL4", "UART2_RX"},
	{ "IIC2_SCL7", "KEY_COL2"},
	{ "IIC2_SDA0", "IIC2_SDA"},
	{ "IIC2_SDA1", "PWM_15"},
	{ "IIC2_SDA3", "PWR_GPIO_13"},
	{ "IIC2_SDA4", "UART2_TX"},
	{ "IIC2_SDA5", "IIS1_MCLK"},
	{ "IIC2_SDA6", "IIS2_MCLK"},
	{ "IIC2_SDA7", "KEY_COL3"},
	{ "UART2_TX0", "UART2_TX"},
	{ "UART2_TX1", "PWM_11"},
	{ "UART2_TX2", "PWR_UART1_TX"},
	{ "UART2_TX3", "PWR_GPIO_14"},
	{ "UART2_TX4", "KEY_ROW3"},
	{ "UART2_TX5", "UART4_TX"},
	{ "UART2_TX6", "IIS2_BCLK"},
	{ "UART2_TX7", "WG2_D0"},
	{ "UART2_RTS0", "UART2_RTS"},
	{ "UART2_RTS1", "PWM_8"},
	{ "UART2_RTS3", "PWR_GPIO_15"},
	{ "UART2_RTS4", "KEY_ROW0"},
	{ "UART2_RTS5", "UART4_RTS"},
	{ "UART2_RTS6", "IIS2_DO"},
	{ "UART2_RTS7", "WG1_D0"},
	{ "UART2_RX0", "UART2_RX"},
	{ "UART2_RX1", "PWM_10"},
	{ "UART2_RX2", "PWR_UART1_RX"},
	{ "UART2_RX3", "PWR_GPIO_16"},
	{ "UART2_RX4", "KEY_COL3"},
	{ "UART2_RX5", "UART4_RX"},
	{ "UART2_RX6", "IIS2_DI"},
	{ "UART2_RX7", "WG2_D1"},
	{ "UART2_CTS0", "UART2_CTS"},
	{ "UART2_CTS1", "PWM_9"},
	{ "UART2_CTS3", "PWR_GPIO_17"},
	{ "UART2_CTS4", "KEY_ROW1"},
	{ "UART2_CTS5", "UART4_CTS"},
	{ "UART2_CTS6", "IIS2_LRCK"},
	{ "UART2_CTS7", "WG1_D1"},
	{ "SD1_D30", "PWR_SD1_D3_VO32"},
	{ "SD1_D31", "SPI2_CS_X"},
	{ "SD1_D32", "IIC1_SCL"},
	{ "SD1_D33", "PWR_GPIO_18"},
	{ "SD1_D34", "CAM_MCLK0"},
	{ "SD1_D35", "UART3_CTS"},
	{ "SD1_D36", "PWR_SPINOR1_CS_X"},
	{ "SD1_D37", "PWM_4"},
	{ "SD1_D20", "PWR_SD1_D2_VO33"},
	{ "SD1_D21", "IIC1_SCL"},
	{ "SD1_D22", "UART2_TX"},
	{ "SD1_D23", "PWR_GPIO_19"},
	{ "SD1_D24", "CAM_MCLK0"},
	{ "SD1_D25", "UART3_TX"},
	{ "SD1_D26", "PWR_SPINOR1_HOLD_X"},
	{ "SD1_D27", "PWM_5"},
	{ "SD1_D10", "PWR_SD1_D1_VO34"},
	{ "SD1_D11", "IIC1_SDA"},
	{ "SD1_D12", "UART2_RX"},
	{ "SD1_D13", "PWR_GPIO_20"},
	{ "SD1_D14", "CAM_MCLK1"},
	{ "SD1_D15", "UART3_RX"},
	{ "SD1_D16", "PWR_SPINOR1_WP_X"},
	{ "SD1_D17", "PWM_6"},
	{ "SD1_D00", "PWR_SD1_D0_VO35"},
	{ "SD1_D01", "SPI2_SDI"},
	{ "SD1_D02", "IIC1_SDA"},
	{ "SD1_D03", "PWR_GPIO_21"},
	{ "SD1_D04", "CAM_MCLK1"},
	{ "SD1_D05", "UART3_RTS"},
	{ "SD1_D06", "PWR_SPINOR1_MISO"},
	{ "SD1_D07", "PWM_7"},
	{ "SD1_CMD0", "PWR_SD1_CMD_VO36"},
	{ "SD1_CMD1", "SPI2_SDO"},
	{ "SD1_CMD2", "IIC3_SCL"},
	{ "SD1_CMD3", "PWR_GPIO_22"},
	{ "SD1_CMD4", "CAM_VS0"},
	{ "SD1_CMD5", "EPHY_LNK_LED"},
	{ "SD1_CMD6", "PWR_SPINOR1_MOSI"},
	{ "SD1_CMD7", "PWM_8"},
	{ "SD1_CLK0", "PWR_SD1_CLK_VO37"},
	{ "SD1_CLK1", "SPI2_SCK"},
	{ "SD1_CLK2", "IIC3_SDA"},
	{ "SD1_CLK3", "PWR_GPIO_23"},
	{ "SD1_CLK4", "CAM_HS0"},
	{ "SD1_CLK5", "EPHY_SPD_LED"},
	{ "SD1_CLK6", "PWR_SPINOR1_SCK"},
	{ "SD1_CLK7", "PWM_9"},
	{ "RSTN0", "RSTN"},
	{ "PWM0_BUCK0", "PWM_0"},
	{ "PWM0_BUCK3", "XGPIOB_0"},
	{ "ADC31", "CAM_MCLK0"},
	{ "ADC32", "IIC4_SCL"},
	{ "ADC33", "XGPIOB_1"},
	{ "ADC34", "PWM_12"},
	{ "ADC35", "EPHY_LNK_LED"},
	{ "ADC36", "WG2_D0"},
	{ "ADC37", "UART3_TX"},
	{ "ADC21", "CAM_MCLK1"},
	{ "ADC22", "IIC4_SDA"},
	{ "ADC23", "XGPIOB_2"},
	{ "ADC24", "PWM_13"},
	{ "ADC25", "EPHY_SPD_LED"},
	{ "ADC26", "WG2_D1"},
	{ "ADC27", "UART3_RX"},
	{ "ADC13", "XGPIOB_3"},
	{ "ADC14", "KEY_COL2"},
	{ "USB_ID0", "USB_ID"},
	{ "USB_ID3", "XGPIOB_4"},
	{ "USB_VBUS_EN0", "USB_VBUS_EN"},
	{ "USB_VBUS_EN3", "XGPIOB_5"},
	{ "PKG_TYPE00", "PKG_TYPE0"},
	{ "USB_VBUS_DET0", "USB_VBUS_DET"},
	{ "USB_VBUS_DET3", "XGPIOB_6"},
	{ "USB_VBUS_DET4", "CAM_MCLK0"},
	{ "USB_VBUS_DET5", "CAM_MCLK1"},
	{ "PKG_TYPE10", "PKG_TYPE1"},
	{ "PKG_TYPE20", "PKG_TYPE2"},
	{ "MUX_SPI1_MISO1", "UART3_RTS"},
	{ "MUX_SPI1_MISO2", "IIC1_SDA"},
	{ "MUX_SPI1_MISO3", "XGPIOB_8"},
	{ "MUX_SPI1_MISO4", "PWM_9"},
	{ "MUX_SPI1_MISO5", "KEY_COL1"},
	{ "MUX_SPI1_MISO6", "SPI1_SDI"},
	{ "MUX_SPI1_MISO7", "DBG_14"},
	{ "MUX_SPI1_MOSI1", "UART3_RX"},
	{ "MUX_SPI1_MOSI2", "IIC1_SCL"},
	{ "MUX_SPI1_MOSI3", "XGPIOB_7"},
	{ "MUX_SPI1_MOSI4", "PWM_8"},
	{ "MUX_SPI1_MOSI5", "KEY_COL0"},
	{ "MUX_SPI1_MOSI6", "SPI1_SDO"},
	{ "MUX_SPI1_MOSI7", "DBG_13"},
	{ "MUX_SPI1_CS1", "UART3_CTS"},
	{ "MUX_SPI1_CS2", "CAM_MCLK0"},
	{ "MUX_SPI1_CS3", "XGPIOB_10"},
	{ "MUX_SPI1_CS4", "PWM_11"},
	{ "MUX_SPI1_CS5", "KEY_ROW3"},
	{ "MUX_SPI1_CS6", "SPI1_CS_X"},
	{ "MUX_SPI1_CS7", "DBG_16"},
	{ "MUX_SPI1_SCK1", "UART3_TX"},
	{ "MUX_SPI1_SCK2", "CAM_MCLK1"},
	{ "MUX_SPI1_SCK3", "XGPIOB_9"},
	{ "MUX_SPI1_SCK4", "PWM_10"},
	{ "MUX_SPI1_SCK5", "KEY_ROW2"},
	{ "MUX_SPI1_SCK6", "SPI1_SCK"},
	{ "MUX_SPI1_SCK7", "DBG_15"},
	{ "PAD_ETH_TXP1", "UART3_RX"},
	{ "PAD_ETH_TXP2", "IIC1_SCL"},
	{ "PAD_ETH_TXP3", "XGPIOB_25"},
	{ "PAD_ETH_TXP4", "PWM_13"},
	{ "PAD_ETH_TXP5", "CAM_MCLK0"},
	{ "PAD_ETH_TXP6", "SPI1_SDO"},
	{ "PAD_ETH_TXP7", "IIS2_LRCK"},
	{ "PAD_ETH_TXM1", "UART3_RTS"},
	{ "PAD_ETH_TXM2", "IIC1_SDA"},
	{ "PAD_ETH_TXM3", "XGPIOB_24"},
	{ "PAD_ETH_TXM4", "PWM_12"},
	{ "PAD_ETH_TXM5", "CAM_MCLK1"},
	{ "PAD_ETH_TXM6", "SPI1_SDI"},
	{ "PAD_ETH_TXM7", "IIS2_BCLK"},
	{ "PAD_ETH_RXP1", "UART3_TX"},
	{ "PAD_ETH_RXP2", "CAM_MCLK1"},
	{ "PAD_ETH_RXP3", "XGPIOB_27"},
	{ "PAD_ETH_RXP4", "PWM_15"},
	{ "PAD_ETH_RXP5", "CAM_HS0"},
	{ "PAD_ETH_RXP6", "SPI1_SCK"},
	{ "PAD_ETH_RXP7", "IIS2_DO"},
	{ "PAD_ETH_RXM1", "UART3_CTS"},
	{ "PAD_ETH_RXM2", "CAM_MCLK0"},
	{ "PAD_ETH_RXM3", "XGPIOB_26"},
	{ "PAD_ETH_RXM4", "PWM_14"},
	{ "PAD_ETH_RXM5", "CAM_VS0"},
	{ "PAD_ETH_RXM6", "SPI1_CS_X"},
	{ "PAD_ETH_RXM7", "IIS2_DI"},
	{ "VIVO_D100", "PWM_1"},
	{ "VIVO_D101", "VI1_D_10"},
	{ "VIVO_D102", "VO_D_23"},
	{ "VIVO_D103", "XGPIOB_11"},
	{ "VIVO_D104", "RMII0_IRQ"},
	{ "VIVO_D105", "CAM_MCLK0"},
	{ "VIVO_D106", "IIC1_SDA"},
	{ "VIVO_D107", "UART2_TX"},
	{ "VIVO_D90", "PWM_2"},
	{ "VIVO_D91", "VI1_D_9"},
	{ "VIVO_D92", "VO_D_22"},
	{ "VIVO_D93", "XGPIOB_12"},
	{ "VIVO_D95", "CAM_MCLK1"},
	{ "VIVO_D96", "IIC1_SCL"},
	{ "VIVO_D97", "UART2_RX"},
	{ "VIVO_D80", "PWM_3"},
	{ "VIVO_D81", "VI1_D_8"},
	{ "VIVO_D82", "VO_D_21"},
	{ "VIVO_D83", "XGPIOB_13"},
	{ "VIVO_D84", "RMII0_MDIO"},
	{ "VIVO_D85", "SPI3_SDO"},
	{ "VIVO_D86", "IIC2_SCL"},
	{ "VIVO_D87", "CAM_VS0"},
	{ "VIVO_D70", "VI2_D_7"},
	{ "VIVO_D71", "VI1_D_7"},
	{ "VIVO_D72", "VO_D_20"},
	{ "VIVO_D73", "XGPIOB_14"},
	{ "VIVO_D74", "RMII0_RXD1"},
	{ "VIVO_D75", "SPI3_SDI"},
	{ "VIVO_D76", "IIC2_SDA"},
	{ "VIVO_D77", "CAM_HS0"},
	{ "VIVO_D60", "VI2_D_6"},
	{ "VIVO_D61", "VI1_D_6"},
	{ "VIVO_D62", "VO_D_19"},
	{ "VIVO_D63", "XGPIOB_15"},
	{ "VIVO_D64", "RMII0_REFCLKI"},
	{ "VIVO_D65", "SPI3_SCK"},
	{ "VIVO_D66", "UART2_TX"},
	{ "VIVO_D67", "CAM_VS0"},
	{ "VIVO_D50", "VI2_D_5"},
	{ "VIVO_D51", "VI1_D_5"},
	{ "VIVO_D52", "VO_D_18"},
	{ "VIVO_D53", "XGPIOB_16"},
	{ "VIVO_D54", "RMII0_RXD0"},
	{ "VIVO_D55", "SPI3_CS_X"},
	{ "VIVO_D56", "UART2_RX"},
	{ "VIVO_D57", "CAM_HS0"},
	{ "VIVO_D40", "VI2_D_4"},
	{ "VIVO_D41", "VI1_D_4"},
	{ "VIVO_D42", "VO_D_17"},
	{ "VIVO_D43", "XGPIOB_17"},
	{ "VIVO_D44", "RMII0_MDC"},
	{ "VIVO_D45", "IIC1_SDA"},
	{ "VIVO_D46", "UART2_CTS"},
	{ "VIVO_D47", "CAM_VS0"},
	{ "VIVO_D30", "VI2_D_3"},
	{ "VIVO_D31", "VI1_D_3"},
	{ "VIVO_D32", "VO_D_16"},
	{ "VIVO_D33", "XGPIOB_18"},
	{ "VIVO_D34", "RMII0_TXD0"},
	{ "VIVO_D35", "IIC1_SCL"},
	{ "VIVO_D36", "UART2_RTS"},
	{ "VIVO_D37", "CAM_HS0"},
	{ "VIVO_D20", "VI2_D_2"},
	{ "VIVO_D21", "VI1_D_2"},
	{ "VIVO_D22", "VO_D_15"},
	{ "VIVO_D23", "XGPIOB_19"},
	{ "VIVO_D24", "RMII0_TXD1"},
	{ "VIVO_D25", "CAM_MCLK1"},
	{ "VIVO_D26", "PWM_2"},
	{ "VIVO_D27", "UART2_TX"},
	{ "VIVO_D10", "VI2_D_1"},
	{ "VIVO_D11", "VI1_D_1"},
	{ "VIVO_D12", "VO_D_14"},
	{ "VIVO_D13", "XGPIOB_20"},
	{ "VIVO_D14", "RMII0_RXDV"},
	{ "VIVO_D15", "IIC3_SDA"},
	{ "VIVO_D16", "PWM_3"},
	{ "VIVO_D17", "IIC4_SCL"},
	{ "VIVO_D00", "VI2_D_0"},
	{ "VIVO_D01", "VI1_D_0"},
	{ "VIVO_D02", "VO_D_13"},
	{ "VIVO_D03", "XGPIOB_21"},
	{ "VIVO_D04", "RMII0_TXCLK"},
	{ "VIVO_D05", "IIC3_SCL"},
	{ "VIVO_D06", "WG1_D0"},
	{ "VIVO_D07", "IIC4_SDA"},
	{ "VIVO_CLK0", "VI2_CLK"},
	{ "VIVO_CLK1", "VI1_CLK"},
	{ "VIVO_CLK2", "VO_CLK1"},
	{ "VIVO_CLK3", "XGPIOB_22"},
	{ "VIVO_CLK4", "RMII0_TXEN"},
	{ "VIVO_CLK5", "CAM_MCLK0"},
	{ "VIVO_CLK6", "WG1_D1"},
	{ "VIVO_CLK7", "UART2_RX"},
	{ "PAD_MIPIRX5N1", "VI1_D_11"},
	{ "PAD_MIPIRX5N2", "VO_D_12"},
	{ "PAD_MIPIRX5N3", "XGPIOC_0"},
	{ "PAD_MIPIRX5N5", "CAM_MCLK0"},
	{ "PAD_MIPIRX5N6", "WG0_D0"},
	{ "PAD_MIPIRX5N7", "DBG_0"},
	{ "PAD_MIPIRX5P1", "VI1_D_12"},
	{ "PAD_MIPIRX5P2", "VO_D_11"},
	{ "PAD_MIPIRX5P3", "XGPIOC_1"},
	{ "PAD_MIPIRX5P4", "IIS1_MCLK"},
	{ "PAD_MIPIRX5P5", "CAM_MCLK1"},
	{ "PAD_MIPIRX5P6", "WG0_D1"},
	{ "PAD_MIPIRX5P7", "DBG_1"},
	{ "PAD_MIPIRX4N0", "CV_4WTDI_CR_SCL0"},
	{ "PAD_MIPIRX4N1", "VI0_CLK"},
	{ "PAD_MIPIRX4N2", "VI1_D_13"},
	{ "PAD_MIPIRX4N3", "XGPIOC_2"},
	{ "PAD_MIPIRX4N4", "IIC1_SDA"},
	{ "PAD_MIPIRX4N5", "CAM_MCLK0"},
	{ "PAD_MIPIRX4N6", "KEY_ROW0"},
	{ "PAD_MIPIRX4N7", "MUX_SPI1_SCK"},
	{ "PAD_MIPIRX4P0", "CV_4WTMS_CR_SDA0"},
	{ "PAD_MIPIRX4P1", "VI0_D_0"},
	{ "PAD_MIPIRX4P2", "VI1_D_14"},
	{ "PAD_MIPIRX4P3", "XGPIOC_3"},
	{ "PAD_MIPIRX4P4", "IIC1_SCL"},
	{ "PAD_MIPIRX4P5", "CAM_MCLK1"},
	{ "PAD_MIPIRX4P6", "KEY_ROW1"},
	{ "PAD_MIPIRX4P7", "MUX_SPI1_CS"},
	{ "PAD_MIPIRX3N0", "CV_4WTDO_CR_2WTMS"},
	{ "PAD_MIPIRX3N1", "VI0_D_1"},
	{ "PAD_MIPIRX3N2", "VI1_D_15"},
	{ "PAD_MIPIRX3N3", "XGPIOC_4"},
	{ "PAD_MIPIRX3N4", "CAM_MCLK0"},
	{ "PAD_MIPIRX3N7", "MUX_SPI1_MISO"},
	{ "PAD_MIPIRX3P0", "CV_4WTCK_CR_2WTCK"},
	{ "PAD_MIPIRX3P1", "VI0_D_2"},
	{ "PAD_MIPIRX3P2", "VI1_D_16"},
	{ "PAD_MIPIRX3P3", "XGPIOC_5"},
	{ "PAD_MIPIRX3P7", "MUX_SPI1_MOSI"},
	{ "PAD_MIPIRX2N1", "VI0_D_3"},
	{ "PAD_MIPIRX2N2", "VO_D_10"},
	{ "PAD_MIPIRX2N3", "XGPIOC_6"},
	{ "PAD_MIPIRX2N4", "VI1_D_17"},
	{ "PAD_MIPIRX2N5", "IIC4_SCL"},
	{ "PAD_MIPIRX2N7", "DBG_6"},
	{ "PAD_MIPIRX2P1", "VI0_D_4"},
	{ "PAD_MIPIRX2P2", "VO_D_9"},
	{ "PAD_MIPIRX2P3", "XGPIOC_7"},
	{ "PAD_MIPIRX2P4", "VI1_D_18"},
	{ "PAD_MIPIRX2P5", "IIC4_SDA"},
	{ "PAD_MIPIRX2P7", "DBG_7"},
	{ "PAD_MIPIRX1N1", "VI0_D_5"},
	{ "PAD_MIPIRX1N2", "VO_D_8"},
	{ "PAD_MIPIRX1N3", "XGPIOC_8"},
	{ "PAD_MIPIRX1N6", "KEY_ROW3"},
	{ "PAD_MIPIRX1N7", "DBG_8"},
	{ "PAD_MIPIRX1P1", "VI0_D_6"},
	{ "PAD_MIPIRX1P2", "VO_D_7"},
	{ "PAD_MIPIRX1P3", "XGPIOC_9"},
	{ "PAD_MIPIRX1P4", "IIC1_SDA"},
	{ "PAD_MIPIRX1P6", "KEY_ROW2"},
	{ "PAD_MIPIRX1P7", "DBG_9"},
	{ "PAD_MIPIRX0N1", "VI0_D_7"},
	{ "PAD_MIPIRX0N2", "VO_D_6"},
	{ "PAD_MIPIRX0N3", "XGPIOC_10"},
	{ "PAD_MIPIRX0N4", "IIC1_SCL"},
	{ "PAD_MIPIRX0N5", "CAM_MCLK1"},
	{ "PAD_MIPIRX0N7", "DBG_10"},
	{ "PAD_MIPIRX0P1", "VI0_D_8"},
	{ "PAD_MIPIRX0P2", "VO_D_5"},
	{ "PAD_MIPIRX0P3", "XGPIOC_11"},
	{ "PAD_MIPIRX0P4", "CAM_MCLK0"},
	{ "PAD_MIPIRX0P7", "DBG_11"},
	{ "PAD_MIPI_TXM40", "VI0_D_15"},
	{ "PAD_MIPI_TXM41", "SD1_CLK"},
	{ "PAD_MIPI_TXM42", "VO_D_24"},
	{ "PAD_MIPI_TXM43", "XGPIOC_18"},
	{ "PAD_MIPI_TXM44", "CAM_MCLK1"},
	{ "PAD_MIPI_TXM45", "PWM_12"},
	{ "PAD_MIPI_TXM46", "IIC1_SDA"},
	{ "PAD_MIPI_TXM47", "DBG_18"},
	{ "PAD_MIPI_TXP40", "VI0_D_16"},
	{ "PAD_MIPI_TXP41", "SD1_CMD"},
	{ "PAD_MIPI_TXP42", "VO_D_25"},
	{ "PAD_MIPI_TXP43", "XGPIOC_19"},
	{ "PAD_MIPI_TXP44", "CAM_MCLK0"},
	{ "PAD_MIPI_TXP45", "PWM_13"},
	{ "PAD_MIPI_TXP46", "IIC1_SCL"},
	{ "PAD_MIPI_TXP47", "DBG_19"},
	{ "PAD_MIPI_TXM30", "VI0_D_17"},
	{ "PAD_MIPI_TXM31", "SD1_D0"},
	{ "PAD_MIPI_TXM32", "VO_D_26"},
	{ "PAD_MIPI_TXM33", "XGPIOC_20"},
	{ "PAD_MIPI_TXM34", "IIC2_SDA"},
	{ "PAD_MIPI_TXM35", "PWM_14"},
	{ "PAD_MIPI_TXM36", "IIC1_SDA"},
	{ "PAD_MIPI_TXM37", "CAM_VS0"},
	{ "PAD_MIPI_TXP30", "VI0_D_18"},
	{ "PAD_MIPI_TXP31", "SD1_D1"},
	{ "PAD_MIPI_TXP32", "VO_D_27"},
	{ "PAD_MIPI_TXP33", "XGPIOC_21"},
	{ "PAD_MIPI_TXP34", "IIC2_SCL"},
	{ "PAD_MIPI_TXP35", "PWM_15"},
	{ "PAD_MIPI_TXP36", "IIC1_SCL"},
	{ "PAD_MIPI_TXP37", "CAM_HS0"},
	{ "PAD_MIPI_TXM20", "CV_4WTMS_CR_SDA0"},
	{ "PAD_MIPI_TXM21", "VI0_D_13"},
	{ "PAD_MIPI_TXM22", "VO_D_0"},
	{ "PAD_MIPI_TXM23", "XGPIOC_16"},
	{ "PAD_MIPI_TXM24", "IIC1_SDA"},
	{ "PAD_MIPI_TXM25", "PWM_8"},
	{ "PAD_MIPI_TXM26", "SPI0_SCK"},
	{ "PAD_MIPI_TXM27", "SD1_D2"},
	{ "PAD_MIPI_TXP20", "CV_4WTDI_CR_SCL0"},
	{ "PAD_MIPI_TXP21", "VI0_D_14"},
	{ "PAD_MIPI_TXP22", "VO_CLK0"},
	{ "PAD_MIPI_TXP23", "XGPIOC_17"},
	{ "PAD_MIPI_TXP24", "IIC1_SCL"},
	{ "PAD_MIPI_TXP25", "PWM_9"},
	{ "PAD_MIPI_TXP26", "SPI0_CS_X"},
	{ "PAD_MIPI_TXP27", "SD1_D3"},
	{ "PAD_MIPI_TXM10", "CV_4WTDO_CR_2WTMS"},
	{ "PAD_MIPI_TXM11", "VI0_D_11"},
	{ "PAD_MIPI_TXM12", "VO_D_2"},
	{ "PAD_MIPI_TXM13", "XGPIOC_14"},
	{ "PAD_MIPI_TXM14", "IIC2_SDA"},
	{ "PAD_MIPI_TXM15", "PWM_10"},
	{ "PAD_MIPI_TXM16", "SPI0_SDO"},
	{ "PAD_MIPI_TXM17", "DBG_14"},
	{ "PAD_MIPI_TXP10", "CV_4WTCK_CR_2WTCK"},
	{ "PAD_MIPI_TXP11", "VI0_D_12"},
	{ "PAD_MIPI_TXP12", "VO_D_1"},
	{ "PAD_MIPI_TXP13", "XGPIOC_15"},
	{ "PAD_MIPI_TXP14", "IIC2_SCL"},
	{ "PAD_MIPI_TXP15", "PWM_11"},
	{ "PAD_MIPI_TXP16", "SPI0_SDI"},
	{ "PAD_MIPI_TXP17", "DBG_15"},
	{ "PAD_MIPI_TXM01", "VI0_D_9"},
	{ "PAD_MIPI_TXM02", "VO_D_4"},
	{ "PAD_MIPI_TXM03", "XGPIOC_12"},
	{ "PAD_MIPI_TXM04", "CAM_MCLK1"},
	{ "PAD_MIPI_TXM05", "PWM_14"},
	{ "PAD_MIPI_TXM06", "CAM_VS0"},
	{ "PAD_MIPI_TXM07", "DBG_12"},
	{ "PAD_MIPI_TXP01", "VI0_D_10"},
	{ "PAD_MIPI_TXP02", "VO_D_3"},
	{ "PAD_MIPI_TXP03", "XGPIOC_13"},
	{ "PAD_MIPI_TXP04", "CAM_MCLK0"},
	{ "PAD_MIPI_TXP05", "PWM_15"},
	{ "PAD_MIPI_TXP06", "CAM_HS0"},
	{ "PAD_MIPI_TXP07", "DBG_13"},
	{ "PAD_AUD_AINL_MIC3", "XGPIOC_23"},
	{ "PAD_AUD_AINL_MIC4", "IIS1_BCLK"},
	{ "PAD_AUD_AINL_MIC5", "IIS2_BCLK"},
	{ "PAD_AUD_AINR_MIC3", "XGPIOC_22"},
	{ "PAD_AUD_AINR_MIC4", "IIS1_DO"},
	{ "PAD_AUD_AINR_MIC5", "IIS2_DI"},
	{ "PAD_AUD_AINR_MIC6", "IIS1_DI"},
	{ "PAD_AUD_AOUTL3", "XGPIOC_25"},
	{ "PAD_AUD_AOUTL4", "IIS1_LRCK"},
	{ "PAD_AUD_AOUTL5", "IIS2_LRCK"},
	{ "PAD_AUD_AOUTR3", "XGPIOC_24"},
	{ "PAD_AUD_AOUTR4", "IIS1_DI"},
	{ "PAD_AUD_AOUTR5", "IIS2_DO"},
	{ "PAD_AUD_AOUTR6", "IIS1_DO"},
	{ "GPIO_RTX3", "XGPIOB_23"},
	{ "GPIO_RTX4", "PWM_1"},
	{ "GPIO_RTX5", "CAM_MCLK0"},
	{ "GPIO_ZQ3", "PWR_GPIO_24"},
	{ "GPIO_ZQ4", "PWM_2"},
};
