#include "Det.h"
/*globel struct to know the error in which module*/
Det_ConfigType G_Det_Error;
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
  
void Det_Init (Det_ConfigType* ConfigPtr)
{
  ConfigPtr->ApiId=0U;
  ConfigPtr->ErrorId=0U;
  ConfigPtr->InstanceId=0U;
  ConfigPtr->ModuleId=0U;
}
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
void Det_ReportError ( uint16 ModuleId,uint8 InstanceId,uint8 ApiId,uint8 ErrorId)
{
  G_Det_Error.ModuleId=ModuleId;
  G_Det_Error.InstanceId=InstanceId;
  G_Det_Error.ApiId=ApiId;
  G_Det_Error.ErrorId=ErrorId;
  while(1)
  {
    
  }
}
