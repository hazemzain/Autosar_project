#ifndef DIO_CFG_H
#define DIO_CFG_H

/*
  * AUTOSAR Version 4.3.0
  */
#define DIO_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define DIO_CFG_AR_RELEASE_MINOR_VERSION     (3U)
#define DIO_CFG_AR_RELEASE_PATCH_VERSION     (0U)

/* Pre-compile option for Development Error Detect */
#define DIO_DEV_ERROR_DETECT                (STD_ON)

/* Pre-compile option for Version Info API */
#define DIO_VERSION_INFO_API                (STD_ON)

/* Pre-compile option for presence of Dio_FlipChannel API */
#define DIO_FLIP_CHANNEL_API                (STD_ON)

/* Number of the configured Dio Channels */
#define DIO_CONFIGURED_CHANNLES             (4U)
/* Number of the configured Dio Ports */
#define DIO_CONFIGURED_PORTS 				(2U)

/* Number of the configured Dio Groups */
#define DIO_CONFIGURED_GROUPS 				(2U)

/* Channel Index in the array of structures in Dio_Lcfg.c */
#define DioConf_LED1_CHANNEL_ID_INDEX        (uint8)0x00
#define DioConf_LED2_CHANNEL_ID_INDEX        (uint8)0x01
#define DioConf_BUTTON1_CHANNEL_ID_INDEX     (uint8)0x02
#define DioConf_BUTTON2_CHANNEL_ID_INDEX     (uint8)0x03

/* DIO Configured Port ID's  */
#define DioConf_LED1_PORT_NUM                (Dio_PortType)2 /* PORTC */
#define DioConf_LED2_PORT_NUM                (Dio_PortType)3 /* PORTD */
#define DioConf_BUTTON1_PORT_NUM             (Dio_PortType)0 /* PORTA */
#define DioConf_BUTTON2_PORT_NUM             (Dio_PortType)1 /* PORTB */

/* DIO Configured Channel ID's */
#define DioConf_LED1_CHANNEL_NUM             (Dio_ChannelType)3 /* Pin 3 in PORTC */
#define DioConf_LED2_CHANNEL_NUM             (Dio_ChannelType)6 /* Pin 6 in PORTD */
#define DioConf_BUTTON1_CHANNEL_NUM          (Dio_ChannelType)2 /* Pin 2 in PORTA */
#define DioConf_BUTTON2_CHANNEL_NUM          (Dio_ChannelType)4 /* Pin 4 in PORTB */

#define DioConf_PORT1_PORT_ID_INDEX        (uint8)0x00
#define DioConf_PORT2_PORT_ID_INDEX        (uint8)0x01
#define DioConf_PORT1_PORT_NUM                (Dio_PortType)2 /* PORTC */
#define DioConf_PORT2_PORT_NUM                (Dio_PortType)3 /* PORTD */

#define DioConf_RGP_CHANNEL_GROUP_INDEX     (uint8)0x00
/* DIO Configured Port channel group Mask */
#define DioConf_RGB_CHANNEL_GROUP_MASK       (uint8)0b11100000
/* DIO Configured Port channel group offset */
#define DioConf_RGB_CHANNEL_GROUP_OFFSET       (uint8)0x05
#define DioConf_RGB_PORT_NUM                 (Dio_PortType)0 /* PORTA */


#define DioConf_RGP1_CHANNEL_GROUP_INDEX     (uint8)0x01
/* DIO Configured Port channel group Mask */
#define DioConf_RGB1_CHANNEL_GROUP_MASK       (uint8)0b11100000
/* DIO Configured Port channel group offset */
#define DioConf_RGB1_CHANNEL_GROUP_OFFSET       (uint8)0x05
#define DioConf_RGB1_PORT_NUM                 (Dio_PortType)3 /* PORTD */

/* DIO Configured Port ID's  */
#define DIO_PORTD_ID            (Dio_PortType)3 /* PORTD */
#define DIO_PORTC_ID            (Dio_PortType)2 /* PORTC */
#define DIO_PORTA_ID            (Dio_PortType)0 /* PORTA */
#define DIO_PORTB_ID            (Dio_PortType)1 /* PORTB */
#define DIO_PORTE_ID            (Dio_PortType)4 /* PORTE */
#define DIO_PORTF_ID            (Dio_PortType)5 /* PORTF */



/*max channel number*/
#define Dio_CHANNEL_NUM   54


/* Symbolic Names for Portpins*/
#define CHANNEL_A0_ID    (uint8)0
#define CHANNEL_A1_ID    (uint8)1
#define CHANNEL_A2_ID    (uint8)2
#define CHANNEL_A3_ID    (uint8)3
#define CHANNEL_A4_ID    (uint8)4
#define CHANNEL_A5_ID    (uint8)5
#define CHANNEL_A6_ID    (uint8)6
#define CHANNEL_A7_ID    (uint8)7
#define CHANNEL_B0_ID    (uint8)10
#define CHANNEL_B1_ID    (uint8)11
#define CHANNEL_B2_ID    (uint8)12
#define CHANNEL_B3_ID    (uint8)13
#define CHANNEL_B4_ID    (uint8)14
#define CHANNEL_B5_ID    (uint8)15
#define CHANNEL_B6_ID    (uint8)16
#define CHANNEL_B7_ID    (uint8)17
#define CHANNEL_C0_ID    (uint8)20
#define CHANNEL_C1_ID    (uint8)21
#define CHANNEL_C2_ID    (uint8)22
#define CHANNEL_C3_ID    (uint8)23
#define CHANNEL_C4_ID    (uint8)24
#define CHANNEL_C5_ID    (uint8)25
#define CHANNEL_C6_ID    (uint8)26
#define CHANNEL_C7_ID    (uint8)27
#define CHANNEL_D0_ID    (uint8)30
#define CHANNEL_D1_ID    (uint8)31
#define CHANNEL_D2_ID    (uint8)32
#define CHANNEL_D3_ID    (uint8)33
#define CHANNEL_D4_ID    (uint8)34
#define CHANNEL_D5_ID    (uint8)35
#define CHANNEL_D6_ID    (uint8)36
#define CHANNEL_D7_ID    (uint8)37
#define CHANNEL_E0_ID    (uint8)40
#define CHANNEL_E1_ID    (uint8)41
#define CHANNEL_E2_ID    (uint8)42
#define CHANNEL_E3_ID    (uint8)43
#define CHANNEL_E4_ID    (uint8)44
#define CHANNEL_E5_ID    (uint8)45
#define CHANNEL_F0_ID    (uint8)50
#define CHANNEL_F1_ID    (uint8)51
#define CHANNEL_F2_ID    (uint8)52
#define CHANNEL_F3_ID    (uint8)53
#define CHANNEL_F4_ID    (uint8)54

#endif