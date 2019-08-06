#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME     "Lincoln Agritech Ltd."
#define PRODUCT_NAME    "PAWS"
#define VOLUME_LABEL    "PAWS-BOOT"
#define INDEX_URL       "http://www.lincolnagritech.co.nz"
#define BOARD_ID        "PAWS-PFNZ-revd"

#define USB_VID         0x03EB
#define USB_PID         0x2403

#define LED_PIN         PIN_PB00

#define BOOT_USART_MODULE                 SERCOM1
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM1
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PA01D_SERCOM1_PAD1
#define BOOT_USART_PAD0                   PINMUX_PA00D_SERCOM1_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM1_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM1_GCLK_ID_SLOW

#endif
