#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME     "Lincoln Agritech Ltd."
#define PRODUCT_NAME    "GW50 ATE"
#define VOLUME_LABEL    "GW50-BOOT"
#define INDEX_URL       "http://www.lincolnagritech.co.nz"
#define BOARD_ID        "GW50-ATE-rev1"

#define USB_VID         0x03EB
#define USB_PID         0x2403

#define LED_PIN         PIN_PA27

#define HOLD_PIN        PIN_PB04
#define HOLD_STATE      0

#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD3_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_PA07D_SERCOM0_PAD3
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_UNUSED
#define BOOT_USART_PAD0                   PINMUX_PA04D_SERCOM0_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM1_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM1_GCLK_ID_SLOW

#endif
