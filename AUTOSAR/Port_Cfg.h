#ifndef PORT_CFG_H
#define PORT_CFG_H
 /*
  * AUTOSAR Version 4.3.0
  */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (3U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (0U)
#include "Std_Types.h"
/* AUTOSAR checking between Std Types and Port Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != PORT_CFG_AR_RELEASE_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != PORT_CFG_AR_RELEASE_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != PORT_CFG_AR_RELEASE_PATCH_VERSION))
#error "The AR version of Std_Types.h does not match the expected version"
#endif



#define PORT_DEV_ERROR_DETECT      (STD_ON)/*Switches the development error detection and notification on or off. true: detection and notification is enabled.*/
#define PORT_SET_DIRECTION_PIN_API (STD_ON)
#define PORT_VERSION_INFO_API      (STD_ON)
#define PORT_SET_PIN_API           (STD_ON)
/*number of pin in each port */
#define PORTA_PIN_NUMBER 8
#define PORTB_PIN_NUMBER 8
#define PORTC_PIN_NUMBER 8
#define PORTD_PIN_NUMBER 8
#define PORTE_PIN_NUMBER 6
#define PORTF_PIN_NUMBER 5
#define PORT_PIN_MODE_MIX 11
/* Symbolic Names for Portpins*/
#define PortPin_A0_ID    (uint8)10
#define PortPin_A1_ID    (uint8)11
#define PortPin_A2_ID    (uint8)12
#define PortPin_A3_ID    (uint8)13
#define PortPin_A4_ID    (uint8)14
#define PortPin_A5_ID    (uint8)15
#define PortPin_A6_ID    (uint8)16
#define PortPin_A7_ID    (uint8)17
#define PortPin_B0_ID    (uint8)20
#define PortPin_B1_ID    (uint8)21
#define PortPin_B2_ID    (uint8)22
#define PortPin_B3_ID    (uint8)23
#define PortPin_B4_ID    (uint8)24
#define PortPin_B5_ID    (uint8)25
#define PortPin_B6_ID    (uint8)26
#define PortPin_B7_ID    (uint8)27
#define PortPin_C0_ID    (uint8)30
#define PortPin_C1_ID    (uint8)31
#define PortPin_C2_ID    (uint8)32
#define PortPin_C3_ID    (uint8)33
#define PortPin_C4_ID    (uint8)34
#define PortPin_C5_ID    (uint8)35
#define PortPin_C6_ID    (uint8)36
#define PortPin_C7_ID    (uint8)37
#define PortPin_D0_ID    (uint8)40
#define PortPin_D1_ID    (uint8)41
#define PortPin_D2_ID    (uint8)42
#define PortPin_D3_ID    (uint8)43
#define PortPin_D4_ID    (uint8)44
#define PortPin_D5_ID    (uint8)45
#define PortPin_D6_ID    (uint8)46
#define PortPin_D7_ID    (uint8)47
#define PortPin_E0_ID    (uint8)50
#define PortPin_E1_ID    (uint8)51
#define PortPin_E2_ID    (uint8)52
#define PortPin_E3_ID    (uint8)53
#define PortPin_E4_ID    (uint8)54
#define PortPin_E5_ID    (uint8)55
#define PortPin_F0_ID    (uint8)60
#define PortPin_F1_ID    (uint8)61
#define PortPin_F2_ID    (uint8)62
#define PortPin_F3_ID    (uint8)63
#define PortPin_F4_ID    (uint8)64

#endif
