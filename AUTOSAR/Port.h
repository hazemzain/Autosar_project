#ifndef PORT_H
#define PORT_H
/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_AR_MAJOR_VERSION          (4U)
#define PORT_AR_MINOR_VERSION          (3U)
#define PORT_AR_PATCH_VERSION          (0U)
/*
  needed library
*/
#include "Platform_types.h"
#if ((PLATFORM_TYPES_AR_RELEASE_MAJOR_VERSION  != PORT_AR_MAJOR_VERSION)\
 ||  (PLATFORM_TYPES_AR_RELEASE_MINOR_VERSION  != PORT_AR_MINOR_VERSION)\
 ||  (PLATFORM_TYPES_AR_RELEASE_PATCH_VERSION  != PORT_AR_PATCH_VERSION))
#error "The AR version of PlatForm_Types.h does not match the expected version"
#endif
#include "Std_Types.h"
/* AUTOSAR checking between Std Types and Port Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != PORT_AR_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != PORT_AR_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != PORT_AR_PATCH_VERSION))
#error "The AR version of Std_Types.h does not match the expected version"
#endif
#include "Port_Cfg.h"
/* AUTOSAR Version checking between Port_Cfg.h and Port.h files */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_MAJOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_MINOR_VERSION != PORT_AR_MINOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_PATCH_VERSION != PORT_AR_PATCH_VERSION))
#error "The AR version of Port_Cfg.h does not match the expected version"
#endif
#include "TM4C123GH6PM.h"
#include "Det.h"
#if ((DET_AR_MAJOR_VERSION != PORT_AR_MAJOR_VERSION)\
 ||  (DET_AR_MINOR_VERSION != PORT_AR_MINOR_VERSION)\
 ||  (DET_AR_PATCH_VERSION != PORT_AR_PATCH_VERSION))
#error "The AR version of Port_Cfg.h does not match the expected version"
#endif
/*
  MACROS FOR INTIAL PORT
*/
#define PORT_INITIALIZED      (1U)
#define PORT_NOT_INITIALIZED  (0U)
/*extern uint8 Port_status;*/
/*port module id*/
#define PORT_MODULE_ID          (124U)
/* Port Instance Id */
#define PORT_INSTANCE_ID       (0U)


/*
  MACROS FOR ERROR CODE
*/
#define PORT_E_PARAM_PIN              0x0A    
#define PORT_E_DIRECTION_UNCHANGEABLE 0x0B    /*Port Pin not configured as changeable*/
#define PORT_E_INIT_FAILED            0x0C    /*API Port_Init service called with wrong parameter*/
#define PORT_E_PARAM_INVALID_MODE     0x0D    /*API Port_SetPinMode service called when mode is unchangeable*/
#define PORT_E_MODE_UNCHANGEABLE      0x0E   
#define PORT_E_UNINIT                 0x0F    /*API service called without module initialization*/
#define PORT_E_PARAM_POINTER          0x10    /*APIs called with a Null Pointer*/
/*
  Name:Port_PinModeType
  Kind:uint
  Range Implementation 
  specific --
  As several port pin modes shall be configurable on one pin, 
  the range shall be determined by the implementation.
  Description Different port pin modes.
  Available :via Port.h
*/
typedef uint8 Port_PinModeType;
/*
    name:Port_PinType
    type:uint
    Range 0 - <number of port pins:> --Shall cover all available port pins. The type should be chosen 
    for the specific MCU platform (best performance).
    Description:Data type for the symbolic name of a port pin..
    Available:via Port.h

*/
typedef uint8 Port_PinType;
/*
  Name:Port_PinDirectionType
  Kind:Enumeration
  Range:PORT_PIN_IN -- Sets port pin as input.
        PORT_PIN_OUT -- Sets port pin as output.
  Description: Possible directions of a port pin.
  Available via Port.h
*/
typedef enum{PORT_PIN_IN,PORT_PIN_OUT}Port_PinDirectionType;
typedef enum{PORT_PIN_LEVEL_LOW,PORT_PIN_LEVEL_HIGH}Port_PinLevelType;
typedef enum { PORT_RESISTOR_OFF, PORT_RESISTOR_PULL_UP, PORT_RESISTOR_PULL_DOWN } Port_InternalResistorType;

/*
    name:Port_ConfigType
    type:Structure
    Comment:The contents of the initialization data structure are specific to the microcontroller.
    Description:Type of the external data structure containing the initialization data for this module.
    Available:via Port.h

*/
typedef struct
{
  Port_PinDirectionType Pin_Direction;
   uint8 isDirectionChangable;
  Port_PinType pinId;
  Port_PinModeType pinInitialMode;
  Port_PinLevelType pinInitialLevel;
  Port_PinModeType pinMode;
  uint8 isPinModeChangable;
  Port_InternalResistorType pinInternalResistor;
  
}Port_ConfigType;
/*
  Function definitions(prototype)
*/
/*
  Service Name: Port_Init
  Syntax:void Port_Init (const Port_ConfigType* ConfigPtr)
  Service ID [hex]: 0x00
  Sync/Async: Synchronous
  Reentrancy: Non Reentrant
  Parameters: (in) ConfigPtr Pointer to configuration set.
  Parameters: (inout) None
  Parameters: (out) None
  Return value: None
  Description: Initializes the Port Driver module.
  Available: via Port.h
*/
void Port_Init (const Port_ConfigType* ConfigPtr);
/*
  Service Name: Port_SetPinDirection
  Service ID: [hex] 0x01
  Sync/Async: Synchronous
  Reentrancy: Reentrant
  Parameters (in)Pin Port Pin ID number
  Direction Port Pin Direction
  Parameters: (inout) None
  Parameters: (out) None
  Return value: None
  Description Sets the port pin directio
*/
#if PORT_SET_DIRECTION_PIN_API==STD_ON
void Port_SetPinDirection (Port_PinType Pin,Port_PinDirectionType Direction);

#endif
/*
  Service Name: Port_RefreshPortDirection
  Service ID [hex]: 0x02
  Sync/Async: Synchronous
  Reentrancy: Non Reentrant
  Parameters: (in) None
  Parameters: (inout) None
  Parameters: (out) None
  Return value: None
  Description Refreshes port direction.
  Available: via Port.h
*/
void Port_RefreshPortDirection (void);
/*
  ServiceName: Port_GetVersionInfo
  Service ID [hex]: 0x03
  Sync/Async: Synchronous
  Reentrancy: Reentrant
  Parameters: (in) None
  Parameters: (inout) None
  Parameters (out) versioninfo Pointer to where to store the version information of this module.
  Return value None
  Description Returns the version information of this module.
  Available: via Port.h
*/
#if PORT_VERSION_INFO_API ==STD_ON
  void Port_GetVersionInfo (Std_VersionInfoType* versioninfo);

#endif
/*
  Service Name: Port_SetPinMode
  Service ID: [hex] 0x04
  Sync/Async: Synchronous
  Reentrancy: Reentrant
  Parameters (in)
  Pin Port Pin ID number
  Mode New Port Pin mode to be set on port pin.
  Parameters: (inout) None
  Parameters: (out) None
  Return: value None
  Description: Sets the port pin mode.
  Available: via Port.h

*/
#if PORT_SET_PIN_API ==STD_ON
void Port_SetPinMode (Port_PinType Pin,Port_PinModeType Mode);

#endif
/*Port pin mode from mode list for use with Port_Init() function.*/
#define  PORT_PIN_MODE_ADC  (0U)
#define  PORT_PIN_MODE_DIO  (10U)
#define  PORT_PIN_NOT_ACTIVE  (9U)
#define  PORT_PIN_MODE_UART  (1U)
#define  PORT_PIN_MODE_SSI  (2U)
#define  PORT_PIN_MODE_UART1  (2U)
#define  PORT_PIN_MODE_I2C  (3U)
#define  PORT_PIN_MODE_CAN0  (3U)
#define  PORT_PIN_MODE_PWM0  (4U)
#define  PORT_PIN_MODE_PWM1  (5U)
#define  PORT_PIN_MODE_QEI  (6U)
#define  PORT_PIN_MODE_GPT  (7U)
#define  PORT_PIN_MODE_CAN  (8U)
#define  PORT_PIN_MODE_USB  (8U)
  /*services ids*/
  #define Port_Init_ID                 0x00
  #define Port_SetPinDirection_ID      0x01
  #define Port_RefreshPortDirection_ID 0x02
  #define Port_GetVersionInfo_ID       0x03
  #define Port_SetPinMode_ID           0x04
/*EXTERN ARRAY USED*/
extern const Port_ConfigType PortA_Configuration[PORTA_PIN_NUMBER];
extern const Port_ConfigType PortB_Configuration[PORTB_PIN_NUMBER];
extern const Port_ConfigType PortC_Configuration[PORTC_PIN_NUMBER];
extern const Port_ConfigType PortD_Configuration[PORTD_PIN_NUMBER];
extern const Port_ConfigType PortE_Configuration[PORTE_PIN_NUMBER];
extern const Port_ConfigType PortF_Configuration[PORTF_PIN_NUMBER];
#endif
