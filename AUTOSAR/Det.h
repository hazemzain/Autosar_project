#ifndef DET_H
#define DET_H
/*
 * AUTOSAR Version 4.3.0
 */
#define DET_AR_MAJOR_VERSION          (4U)
#define DET_AR_MINOR_VERSION          (3U)
#define DET_AR_PATCH_VERSION          (0U)
/*The DET includes the headers mentioned in the previous chapters 4.1.1 and 4.1.2. In addition the file Std_Types.h is included*/
#include "Std_Types.h"
/* AUTOSAR checking between Std Types and Port Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != DET_AR_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != DET_AR_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != DET_AR_PATCH_VERSION))
#error "The AR version of Std_Types.h does not match the expected version"
#endif
#include "Platform_types.h"
#if ((PLATFORM_TYPES_AR_RELEASE_MAJOR_VERSION  != DET_AR_MAJOR_VERSION)\
 ||  (PLATFORM_TYPES_AR_RELEASE_MINOR_VERSION  != DET_AR_MINOR_VERSION)\
 ||  (PLATFORM_TYPES_AR_RELEASE_PATCH_VERSION  != DET_AR_PATCH_VERSION))
#error "The AR version of PlatForm_Types.h does not match the expected version"
#endif
/*To support the AUTOSAR memory mapping concept the header MemMap.h is included*/

#define DET_VENDOR_ID 30
#define DET_MODULE_ID (15U)
/* Instance Id */
#define DET_INSTANCE_ID (0U)



/*******************************************************************************************/
/********************************  Name: Det_ConfigType*************************************/
/**********************************Kind: Structure******************************************/
/**********************************  Elements***********************************************/
/*****************************implementation specific***************************************/
/*************************************  Type --*********************************************/
/*************************************  Comment --******************************************/
/*****************Description: Configuration data structure of the Det module.***************/
/***********************************Available: via Det.h*************************************/
/***********************************************************************************************/
typedef struct 
  {
    /* It will store the ModuleId of the reporting module */
    uint16 ModuleId ;
     /* It will store the index based InstanceId of the reporting module */
    uint8 InstanceId ;
    /* It will store the ApiId of the reporting function */
    uint8 ApiId ;
    /* It will store the ErrorId of the reporting error */
    uint8 ErrorId  ;
  }Det_ConfigType;
/*
  Service Name Det_Init
  Specification of Default Error Tracer AUTOSAR CP R19-11 6 of 47 Document ID 17: AUTOSAR_SWS_DefaultErrorTracer
  - AUTOSAR confidential -
  Syntax:void Det_Init (const Det_ConfigType* ConfigPtr)
  Service ID:[hex] 0x00
  Sync/Async:Synchronous
  Reentrancy:Non Reentrant
  Parameters (in):ConfigPtr Pointer to the selected configuration set.
  Parameters (inout):None
  Parameters (out):None
  Return value:None
  Description:Service to initialize the Default Error Tracer.
  Available:via Det.h
  */
  void Det_Init (Det_ConfigType* ConfigPtr);
  /*
  Service Name:Det_ReportError
  Syntax:Std_ReturnType Det_ReportError (uint16 ModuleId,uint8 InstanceId,uint8 ApiId,uint8 ErrorId)
  Service:ID [hex] 0x01
  Sync/Async Not Applicable: The function never returns
  Reentrancy:Reentrant
  Parameters:in)ModuleId Module ID of calling module.
  InstanceId: thedentifier of the index based instance of a module, starting from 0, If the module is a single instance module it shall pass 0 as the 
InstanceId.
  ApiId ID of API service in which error is detected (defined in SWS of calling module)
  ErrorId ID of detected development error (defined in SWS of calling module).Parameters 
(inout) None
Parameters 
(out) Non
  */

void Det_ReportError ( uint16 ModuleId,uint8 InstanceId,uint8 ApiId,uint8 ErrorId);
#endif