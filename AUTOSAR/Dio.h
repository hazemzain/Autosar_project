#ifndef DIO_H
#define DIO_H
/*
 * AUTOAR Version 4.3.0
 */
#define DIO_AR_RELEASE_MAJOR_VERSION   (4U)
#define DIO_AR_RELEASE_MINOR_VERSION   (3U)
#define DIO_AR_RELEASE_PATCH_VERSION   (0U)
/*The Dio module shall comply with the following file structure
  INCLUDE LIBRARY
*/
#include "Det.h"
#if ((DET_AR_MAJOR_VERSION != DIO_AR_RELEASE_MAJOR_VERSION)\
 ||  (DET_AR_MINOR_VERSION != DIO_AR_RELEASE_MINOR_VERSION)\
 ||  (DET_AR_PATCH_VERSION != DIO_AR_RELEASE_PATCH_VERSION))
#error "The AR version of Det.h does not match the expected version"
#endif
#include "Std_Types.h"
/* AUTOSAR checking between Std Types and Port Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != DIO_AR_RELEASE_MAJOR_VERSION )\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != DIO_AR_RELEASE_MINOR_VERSION )\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != DIO_AR_RELEASE_PATCH_VERSION ))
#error "The AR version of Std_Types.h does not match the expected version"
#endif
#include "Dio_Cfg.h"
/* AUTOSAR Version checking between Port_Cfg.h and Port.h files */
#if ((DIO_CFG_AR_RELEASE_MAJOR_VERSION != DIO_AR_RELEASE_MAJOR_VERSION)\
 ||  (DIO_CFG_AR_RELEASE_MINOR_VERSION != DIO_AR_RELEASE_MINOR_VERSION)\
 ||  (DIO_CFG_AR_RELEASE_PATCH_VERSION != DIO_AR_RELEASE_PATCH_VERSION))
#error "The AR version of DIO_Cfg.h does not match the expected version"
#endif
#include "TM4C123GH6PM.h"
/* Id for the company in the AUTOSAR EX TEXAS */
#define DIO_VENDOR_ID    (44U)

/* Dio Module Id */
#define DIO_MODULE_ID    (120U)

/* Dio Instance Id */
#define DIO_INSTANCE_ID  (0U)







/******************************************************************************************/
/************************Macros Development Errors(report to DET)**************************/
/******************************************************************************************/
#define DIO_E_PARAM_INVALID_CHANNEL_ID (0x0A)  /*Invalid channel requested.Related error code*/
#define DIO_E_PARAM_INVALID_PORT_ID    (0x14)  /*Invalid port requested.Related error code*/
#define DIO_E_PARAM_INVALID_GROUP      (0x1f)  /*Invalid channel group requested.Related error code*/
#define DIO_E_PARAM_POINTER            (0x20)  /*API service called with a NULL pointer.Related error code*/


/******************************************************************************************/
/************************ *********Type definitions****************************************/
/******************************************************************************************/

typedef uint8 Dio_ChannelType;  /*Parameters of type Dio_ChannelType contain the numeric ID of a DIO channel.*/
typedef uint8 Dio_PortType;     /*Parameters of type Dio_PortType contain the numeric ID of a DIO port.*/
typedef uint8 Dio_LevelType;    /*Dio_LevelType is the type for the possible levels that a DIO channel can have (input or output)*/
typedef uint8 Dio_PortLevelType;/*- If the µC owns ports of different port widths (e.g. 4, 8,16...Bit) Dio_PortLevelType inherits the size of the largest port*/


/*
  Name: Dio_ChannelGroupType
  Type: Structure
  Element: uint8/16/32   |mask       |This element mask which defines the positions of the channel group.
          uint8          |offset     |This element shall be the position of the Channel Group on the port, counted from the LSB.
          Dio_PortType   |port       |This shall be the port on which the Channel group is defined.
  Description: Type for the definition of a channel group, which consists of several adjoining channels within a port.

*/
typedef struct
  {
    uint8 mask ;/*this element mask which defines the positions of the channel group.*/
    uint8 offset; /*This element shall be the position of the Channel Group on the port, counted from the LSB.*/
    Dio_PortType port;  /*This shall be the port on which the Channel group is defined.*/
  }Dio_ChannelGroupType;
  
  
  typedef struct
{
	/* Member contains the ID of the Port that this channel belongs to */
	Dio_PortType Port_Num;
	/* Member contains the ID of the Channel*/
	Dio_ChannelType Ch_Num;
}Dio_ConfigChannel;

/* Data Structure required for initializing the Dio Driver */
typedef struct
{
	Dio_ConfigChannel Channels[DIO_CONFIGURED_CHANNLES];
	Dio_PortType ports[DIO_CONFIGURED_PORTS];
	Dio_ChannelGroupType groups [DIO_CONFIGURED_GROUPS];
} Dio_ConfigType;
/******************************************************************************************/
/************************************Macros Servece ID*************************************/
/******************************************************************************************/
#define Dio_ReadChannel_ID            0x00
#define Dio_WriteChannel_ID           0x01
#define Dio_ReadPort_ID               0x02
#define Dio_WritePort_ID              0x03
#define Dio_ReadChannelGroup_ID       0x04
#define Dio_WriteChannelGroup_ID      0x05
/******************************************************************************************/
/********************************* Function definitions(prototype)*************************/
/******************************************************************************************/

  
/*
  Service name: Dio_ReadChannel
  Syntax: Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
  Service ID[hex]: 0x00
  Sync/Async: Synchronous
  Reentrancy: Reentrant
  Parameters (in): ChannelId ID of DIO channelParameters 
  (inout):None
  Parameters (out): None
  Return value:Dio_LevelType STD_HIGH The physical level of the corresponding Pin is STD_HIGH STD_LOW The physical level of the corresponding Pin is
*/
 Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);
 
/*
  Service name: Dio_WriteChannel
  Syntax: void Dio_WriteChannel(Dio_ChannelType ChannelId,Dio_LevelType Level)
  Service ID[hex]: 0x01
  Sync/Async: Synchronous
  Reentrancy: Reentrant
  Parameters (in): ChannelId ID of DIO channel Level Value to be written Parameters 
  (inout):None
  Parameters (out): None
  Return value: None
  Description: Service to set a level of a channel.
*/
void Dio_WriteChannel(Dio_ChannelType ChannelId,Dio_LevelType Level);
/*
  Service name: Dio_ReadPort
  Syntax: Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId)
  Service ID[hex]: 0x02
  Sync/Async: Synchronous
  Reentrancy: Reentrant
  Parameters (in): PortId ID of DIO Port Parameters 
  (inout):None
  Parameters (out): None
  Return value: Dio_PortLevelType Level of all channels of that port
  Description: Returns the level of all channels of that port.
*/
Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId);
/*
Service name: Dio_WritePort
Syntax: void Dio_WritePort(Dio_PortType PortId,Dio_PortLevelType Level)
Service ID[hex]: 0x03
Sync/Async: Synchronous
Reentrancy: Reentrant
Parameters (in): PortId ID of DIO Port
Level Value to be written
Parameters 
(inout):None
Parameters (out): None
Return value: None
Description: Service to set a value of the port.

*/
void Dio_WritePort(Dio_PortType PortId,Dio_PortLevelType Level);
/*
Service name: Dio_ReadChannelGroup
Syntax: Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr)
Service ID[hex]: 0x04
Sync/Async: Synchronous
Reentrancy: Reentrant
Parameters (in): ChannelGroupIdPtr Pointer to ChannelGroup
Parameters (inout):None
Parameters (out): None
Return value: Dio_PortLevelType Level of a subset of the adjoining bits of a port
Description: This Service reads a subset of the adjoining bits of a port.

*/
Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr);

/*
  Service name: Dio_WriteChannelGroup
  Syntax: void Dio_WriteChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr,Dio_PortLevelType Level)
  Service ID[hex]: 0x05
  Sync/Async: Synchronous
  Reentrancy: Reentrant
  Parameters (in): ChannelGroupIdPtr Pointer to ChannelGroup Level Value to be writtenParameters 
  (inout):None
  Parameters (out): None
  Return value: None
  Description: Service to set a subset of the adjoining bits of a port to a specified level.
*/
void Dio_WriteChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr,Dio_PortLevelType Level);

/*
Service name: Dio_GetVersionInfo
Syntax: void Dio_GetVersionInfo(Std_VersionInfoType* VersionInfo)
Service ID[hex]: 0x12
Sync/Async: Synchronous
Reentrancy: Reentrant
Parameters (in): None
Parameters 
(inout):
None
Parameters (out): VersionInfo Pointer to where to store the version information of this module.
Return value: None
Description: Service to get the version information of this module.
*/












/* Extern PB structures to be used by Dio and other modules */

extern const Dio_ConfigType Dio_Config;


#endif