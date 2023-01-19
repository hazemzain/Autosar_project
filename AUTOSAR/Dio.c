#include "Dio.h"

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
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
  {
    /*1-check if det is enable or not
      2-check the channal is valid or not if not report error to det
      3-according to channal number we will take the value from register 
    */
    uint8 PORT=ChannelId/10;
    uint8 CHANNAL=ChannelId%10;
    Dio_LevelType Channal_Level;
    #if (DIO_DEV_ERROR_DETECT==STD_ON)
      if(ChannelId>Dio_CHANNEL_NUM )
      {
        /*report error to det*/
        Det_ReportError(DIO_MODULE_ID,DIO_INSTANCE_ID,Dio_ReadChannel_ID,DIO_E_PARAM_INVALID_CHANNEL_ID);
      }
    #endif
      if(ChannelId<=CHANNEL_A7_ID)
      {
        /*read chanal from port A */
        Channal_Level=READ_BIT(GPIOA->DATA,ChannelId);
      }else{
        switch(PORT)
        {
          case 1:
            Channal_Level=READ_BIT(GPIOB->DATA,CHANNAL);
            break;
          
          case 2:
            Channal_Level=READ_BIT(GPIOC->DATA,CHANNAL);
            break;
          case 3:
            Channal_Level=READ_BIT(GPIOD->DATA,CHANNAL);
            break;
          case 4:
            Channal_Level=READ_BIT(GPIOE->DATA,CHANNAL);
            break;
          case 5:
            Channal_Level=READ_BIT(GPIOF->DATA,CHANNAL);
            break;
        
        }
      }
  return Channal_Level;
}
    
 
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
void Dio_WriteChannel(Dio_ChannelType ChannelId,Dio_LevelType Level)
{
    uint8 PORT=ChannelId/10;
    uint8 CHANNAL=ChannelId%10;
    #if (DIO_DEV_ERROR_DETECT==STD_ON)
      if(ChannelId>Dio_CHANNEL_NUM )
      {
        /*report error to det*/
        Det_ReportError(DIO_MODULE_ID,DIO_INSTANCE_ID,Dio_WriteChannel_ID,DIO_E_PARAM_INVALID_CHANNEL_ID);
      }
    #endif
      if(ChannelId<=CHANNEL_A7_ID)
      {
        if(Level==STD_HIGH)
        {
          SET_BIT(GPIOA->DATA,ChannelId);
        }else
        {
          CLEAR_BIT(GPIOA->DATA,ChannelId);
        }
        
      }else{
        switch(PORT)
        {
          case 1:
            if(Level==STD_HIGH)
            {
            SET_BIT(GPIOB->DATA,CHANNAL);
            }else
            {
            CLEAR_BIT(GPIOB->DATA,CHANNAL);
            }
            break;
          
          case 2:
            if(Level==STD_HIGH)
            {
            SET_BIT(GPIOC->DATA,CHANNAL);
            }else
            {
            CLEAR_BIT(GPIOC->DATA,CHANNAL);
            }
            
            break;
          case 3:
            if(Level==STD_HIGH)
            {
            SET_BIT(GPIOD->DATA,CHANNAL);
            }else
            {
            CLEAR_BIT(GPIOD->DATA,CHANNAL);
            }
            
            break;
          case 4:
            if(Level==STD_HIGH)
            {
            SET_BIT(GPIOE->DATA,CHANNAL);
            }else
            {
            CLEAR_BIT(GPIOE->DATA,CHANNAL);
            }
            
            break;
          case 5:
            if(Level==STD_HIGH)
            {
            SET_BIT(GPIOF->DATA,CHANNAL);
            }else
            {
            CLEAR_BIT(GPIOF->DATA,CHANNAL);
            }
            break;
        
        }
      }
}

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
Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId)
{
  Dio_PortLevelType Read_Port=0;
   #if (DIO_DEV_ERROR_DETECT==STD_ON)
      if(PortId>DIO_PORTF_ID  )
      {
        /*report error to det*/
        Det_ReportError(DIO_MODULE_ID,DIO_INSTANCE_ID,Dio_ReadPort_ID,DIO_E_PARAM_INVALID_PORT_ID );
      }
    #endif
  
  switch(PortId)
   {
    case DIO_PORTA_ID:
      Read_Port=GPIOA->DATA;
      break;
    case DIO_PORTB_ID:
      Read_Port=GPIOB->DATA;
      break;
    case DIO_PORTC_ID:
      Read_Port=GPIOC->DATA;
      break;
    case DIO_PORTD_ID:
      Read_Port=GPIOD->DATA;
      break;
    case DIO_PORTE_ID:
      Read_Port=GPIOE->DATA;
      break;
    case DIO_PORTF_ID:
      Read_Port=GPIOF->DATA;
      break;
     
   }
   return Read_Port;
}

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
void Dio_WritePort(Dio_PortType PortId,Dio_PortLevelType Level)
{
  #if (DIO_DEV_ERROR_DETECT==STD_ON)
      if(PortId>DIO_PORTF_ID  )
      {
        /*report error to det*/
        Det_ReportError(DIO_MODULE_ID,DIO_INSTANCE_ID,Dio_ReadPort_ID,DIO_E_PARAM_INVALID_PORT_ID );
      }
    #endif
      switch(PortId)
   {
    case DIO_PORTA_ID:
      GPIOA->DATA=Level;
      break;
    case DIO_PORTB_ID:
      GPIOB->DATA=Level;
      break;
    case DIO_PORTC_ID:
      GPIOC->DATA=Level;
      break;
    case DIO_PORTD_ID:
      GPIOD->DATA=Level;
      break;
    case DIO_PORTE_ID:
      GPIOE->DATA=Level;
      break;
    case DIO_PORTF_ID:
      GPIOF->DATA=Level;
      break;
     
   }
  
  
}



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
Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr)
{
  Dio_PortLevelType Copy_ReadGroub;
  #if (DIO_DEV_ERROR_DETECT==STD_ON)
      if(ChannelGroupIdPtr==NULL )
      {
        /*report error to det*/
        Det_ReportError(DIO_MODULE_ID,DIO_INSTANCE_ID,Dio_ReadChannelGroup_ID,DIO_E_PARAM_POINTER );
      }else{/*do nothing*/}
    
    #endif
      switch(ChannelGroupIdPtr->port)
   {
    case DIO_PORTA_ID:
      Copy_ReadGroub=(GPIOA->DATA & ChannelGroupIdPtr->mask)>>(ChannelGroupIdPtr->offset);
      break;
    case DIO_PORTB_ID:
      Copy_ReadGroub=(GPIOB->DATA & ChannelGroupIdPtr->mask)>>(ChannelGroupIdPtr->offset);
      break;
    case DIO_PORTC_ID:
      Copy_ReadGroub=(GPIOC->DATA & ChannelGroupIdPtr->mask)>>(ChannelGroupIdPtr->offset);
      break;
    case DIO_PORTD_ID:
      Copy_ReadGroub=(GPIOD->DATA & ChannelGroupIdPtr->mask)>>(ChannelGroupIdPtr->offset);
      break;
    case DIO_PORTE_ID:
      Copy_ReadGroub=(GPIOE->DATA & ChannelGroupIdPtr->mask)>>(ChannelGroupIdPtr->offset);
      break;
    case DIO_PORTF_ID:
      Copy_ReadGroub=(GPIOF->DATA & ChannelGroupIdPtr->mask)>>(ChannelGroupIdPtr->offset);
      break;
     
   }
   return Copy_ReadGroub; 
}


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
void Dio_WriteChannelGroup(const Dio_ChannelGroupType* ChannelGroupIdPtr,Dio_PortLevelType Level)
{
  #if (DIO_DEV_ERROR_DETECT==STD_ON)
      if(ChannelGroupIdPtr==NULL )
      {
        /*report error to det*/
        Det_ReportError(DIO_MODULE_ID,DIO_INSTANCE_ID,Dio_ReadChannelGroup_ID,DIO_E_PARAM_POINTER );
      }else{/*do nothing*/}
    
    #endif
      switch(ChannelGroupIdPtr->port)
   {
    case DIO_PORTA_ID:
      GPIOA->DATA= (GPIOA->DATA & (~ChannelGroupIdPtr->mask))|(Level<<ChannelGroupIdPtr->offset);
      break;
    case DIO_PORTB_ID:
     GPIOB->DATA= (GPIOB->DATA & (~ChannelGroupIdPtr->mask))|(Level<<ChannelGroupIdPtr->offset);
      break;
    case DIO_PORTC_ID:
      GPIOC->DATA= (GPIOC->DATA & (~ChannelGroupIdPtr->mask))|(Level<<ChannelGroupIdPtr->offset);
      break;
    case DIO_PORTD_ID:
      GPIOD->DATA= (GPIOD->DATA & (~ChannelGroupIdPtr->mask))|(Level<<ChannelGroupIdPtr->offset);
      break;
    case DIO_PORTE_ID:
      GPIOE->DATA= (GPIOE->DATA & (~ChannelGroupIdPtr->mask))|(Level<<ChannelGroupIdPtr->offset);
      break;
    case DIO_PORTF_ID:
      GPIOF->DATA= (GPIOF->DATA & (~ChannelGroupIdPtr->mask))|(Level<<ChannelGroupIdPtr->offset);
      break;
     
   }
}