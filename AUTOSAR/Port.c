#include "Port.h"
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
uint8_t Port_status=0;
void Port_Init (const Port_ConfigType* ConfigPtr)
{
  /*DISABLE ALL INNTERRUPT*/
  /*__ASM("CPISD I");*/
 __disable_irq();
  
  uint8 Port=ConfigPtr->pinId/10; /*to determine the correct port*/
  uint8 Pin=ConfigPtr->pinId%10;  /*to determine the correct Pin*/
  #if PORT_DEV_ERROR_DETECT ==STD_ON
    if(ConfigPtr==NULL)
      {
        /*report error for det ,APIs called with a Null Pointer*/
        Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,Port_Init_ID, PORT_E_PARAM_POINTER );
      }
     if(ConfigPtr->pinId >64||ConfigPtr->pinId==18||ConfigPtr->pinId==19||ConfigPtr->pinId==28||ConfigPtr->pinId==29||ConfigPtr->pinId==38||ConfigPtr->pinId==39)
      {
        /*report error for det Invalid Port Pin ID requested*/
        Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,Port_Init_ID, PORT_E_PARAM_PIN );
      }
  #endif
      /*intialize port*/
  if(Port==1)
      {
        /*intialize clock for port A*/
        SET_BIT(SYSCTL->RCGCGPIO,0);
        /*ENABLE PIN AS DIGIATAL INPUT OUTPUT BIN*/
        SET_BIT(GPIOA->DEN,Pin);
        /*set pin direction input or output*/
        if(ConfigPtr->Pin_Direction==PORT_PIN_IN)
          {
            CLEAR_BIT(GPIOA->DIR,Pin);
            /*Select beetween pull up and pulldown resistor*/
            if(ConfigPtr->pinInternalResistor==PORT_RESISTOR_PULL_UP)
            {
              /*set bit for pinn in port A to select pull up resistor*/
              SET_BIT(GPIOA->PUR,Pin);
              /*diable pull down for same pin*/
              CLEAR_BIT(GPIOA->PDR,Pin);
            }else if(ConfigPtr->pinInternalResistor==PORT_RESISTOR_PULL_DOWN)
            {
              /*set bit for pinn in port A to select pull down resistor*/
              
              SET_BIT(GPIOA->PDR,Pin);
              /*diable pull UP for same pin*/
              CLEAR_BIT(GPIOA->PUR,Pin);
            }else
            {
              /*disable pull up and pull down for resistor*/
              CLEAR_BIT(GPIOA->PUR,Pin);
              CLEAR_BIT(GPIOA->PDR,Pin);
            }
          }else
          {
            SET_BIT(GPIOA->DIR,Pin);
            /*write the inntial value for pin in  DATA reg*/
            if(ConfigPtr->pinInitialLevel==PORT_PIN_LEVEL_LOW)
            {
              CLEAR_BIT(GPIOA->DATA,Pin);
            }else
            {
              SET_BIT(GPIOA->DIR,Pin);
            }
          }
      }
      else if(Port==2)
      {
        /*intialize clock for port B*/
        SET_BIT(SYSCTL->RCGCGPIO,1);
        /*ENABLE PIN AS DIGIATAL INPUT OUTPUT BIN*/
        SET_BIT(GPIOB->DEN,Pin);
        /*set pin direction input or output*/
        if(ConfigPtr->Pin_Direction==PORT_PIN_IN)
          {
            CLEAR_BIT(GPIOB->DIR,Pin);
            /*Select beetween pull up and pulldown resistor*/
            if(ConfigPtr->pinInternalResistor==PORT_RESISTOR_PULL_UP)
            {
              /*set bit for pinn in port B to select pull up resistor*/
              SET_BIT(GPIOB->PUR,Pin);
              /*diable pull down for same pin*/
              CLEAR_BIT(GPIOB->PDR,Pin);
            }else if(ConfigPtr->pinInternalResistor==PORT_RESISTOR_PULL_DOWN)
            {
              /*set bit for pinn in port B to select pull down resistor*/
              
              SET_BIT(GPIOB->PDR,Pin);
              /*diable pull UP for same pin*/
              CLEAR_BIT(GPIOB->PUR,Pin);
            }else
            {
              /*disable pull up and pull down for resistor*/
              CLEAR_BIT(GPIOB->PUR,Pin);
              CLEAR_BIT(GPIOB->PDR,Pin);
            }
          }else
          {
            SET_BIT(GPIOB->DIR,Pin);
            /*write the inntial value for pin in  DATA reg*/
            if(ConfigPtr->pinInitialLevel==PORT_PIN_LEVEL_LOW)
            {
              CLEAR_BIT(GPIOB->DATA,Pin);
            }else
            {
              SET_BIT(GPIOB->DIR,Pin);
            }
          }
      }
      else if(Port==3)
      {
        /*intialize clock for port C*/
        SET_BIT(SYSCTL->RCGCGPIO,2);
        /*ENABLE PIN AS DIGIATAL INPUT OUTPUT BIN*/
        SET_BIT(GPIOC->DEN,Pin);
        /*set pin direction input or output*/
        if(ConfigPtr->Pin_Direction==PORT_PIN_IN)
          {
            CLEAR_BIT(GPIOC->DIR,Pin);
            /*Select beetween pull up and pulldown resistor*/
            if(ConfigPtr->pinInternalResistor==PORT_RESISTOR_PULL_UP)
            {
              /*set bit for pinn in port C to select pull up resistor*/
              SET_BIT(GPIOC->PUR,Pin);
              /*diable pull down for same pin*/
              CLEAR_BIT(GPIOC->PDR,Pin);
            }else if(ConfigPtr->pinInternalResistor==PORT_RESISTOR_PULL_DOWN)
            {
              /*set bit for pinn in port C to select pull down resistor*/
              
              SET_BIT(GPIOC->PDR,Pin);
              /*diable pull UP for same pin*/
              CLEAR_BIT(GPIOC->PUR,Pin);
            }else
            {
              /*disable pull up and pull down for resistor*/
              CLEAR_BIT(GPIOC->PUR,Pin);
              CLEAR_BIT(GPIOC->PDR,Pin);
            }
          }else
          {
            SET_BIT(GPIOC->DIR,Pin);
            /*write the inntial value for pin in  DATA reg*/
            if(ConfigPtr->pinInitialLevel==PORT_PIN_LEVEL_LOW)
            {
              CLEAR_BIT(GPIOC->DATA,Pin);
            }else
            {
              SET_BIT(GPIOC->DIR,Pin);
            }
          }
      }
       else if(Port==4)
      {
        /*intialize clock for port D*/
        SET_BIT(SYSCTL->RCGCGPIO,3);
        /*ENABLE PIN AS DIGIATAL INPUT OUTPUT BIN*/
        SET_BIT(GPIOD->DEN,Pin);
        /*set pin direction input or output*/
        if(ConfigPtr->Pin_Direction==PORT_PIN_IN)
          {
            CLEAR_BIT(GPIOD->DIR,Pin);
            /*Select beetween pull up and pulldown resistor*/
            if(ConfigPtr->pinInternalResistor==PORT_RESISTOR_PULL_UP)
            {
              /*set bit for pinn in port D to select pull up resistor*/
              SET_BIT(GPIOD->PUR,Pin);
              /*diable pull down for same pin*/
              CLEAR_BIT(GPIOD->PDR,Pin);
            }else if(ConfigPtr->pinInternalResistor==PORT_RESISTOR_PULL_DOWN)
            {
              /*set bit for pinn in port D to select pull down resistor*/
              
              SET_BIT(GPIOD->PDR,Pin);
              /*diable pull UP for same pin*/
              CLEAR_BIT(GPIOD->PUR,Pin);
            }else
            {
              /*disable pull up and pull down for resistor*/
              CLEAR_BIT(GPIOD->PUR,Pin);
              CLEAR_BIT(GPIOD->PDR,Pin);
            }
          }else
          {
            SET_BIT(GPIOD->DIR,Pin);
            /*write the inntial value for pin in  DATA reg*/
            if(ConfigPtr->pinInitialLevel==PORT_PIN_LEVEL_LOW)
            {
              CLEAR_BIT(GPIOD->DATA,Pin);
            }else
            {
              SET_BIT(GPIOD->DIR,Pin);
            }
            
          }
      }
      else if(Port==5)
      {
        /*intialize clock for port E*/
        SET_BIT(SYSCTL->RCGCGPIO,4);
        /*ENABLE PIN AS DIGIATAL INPUT OUTPUT BIN*/
        SET_BIT(GPIOE->DEN,Pin);
        /*set pin direction input or output*/
        if(ConfigPtr->Pin_Direction==PORT_PIN_IN)
          {
            CLEAR_BIT(GPIOE->DIR,Pin);
            /*Select beetween pull up and pulldown resistor*/
            if(ConfigPtr->pinInternalResistor==PORT_RESISTOR_PULL_UP)
            {
              /*set bit for pinn in port E to select pull up resistor*/
              SET_BIT(GPIOE->PUR,Pin);
              /*diable pull down for same pin*/
              CLEAR_BIT(GPIOE->PDR,Pin);
            }else if(ConfigPtr->pinInternalResistor==PORT_RESISTOR_PULL_DOWN)
            {
              /*set bit for pinn in port A to select pull down resistor*/
              
              SET_BIT(GPIOE->PDR,Pin);
              /*diable pull UP for same pin*/
              CLEAR_BIT(GPIOE->PUR,Pin);
            }else
            {
              /*disable pull up and pull down for resistor*/
              CLEAR_BIT(GPIOE->PUR,Pin);
              CLEAR_BIT(GPIOE->PDR,Pin);
            }
          }else
          {
            SET_BIT(GPIOE->DIR,Pin);
            /*write the inntial value for pin in  DATA reg*/
            if(ConfigPtr->pinInitialLevel==PORT_PIN_LEVEL_LOW)
            {
              CLEAR_BIT(GPIOE->DATA,Pin);
            }else
            {
              SET_BIT(GPIOE->DIR,Pin);
            }
          }
      }else
      {
        /*intialize clock for port F*/
        SET_BIT(SYSCTL->RCGCGPIO,5);
        
        /*set pin direction input or output*/
        if(ConfigPtr->Pin_Direction==PORT_PIN_IN)
          {
            CLEAR_BIT(GPIOF->DIR,Pin);
            /*Select beetween pull up and pulldown resistor*/
            if(ConfigPtr->pinInternalResistor==PORT_RESISTOR_PULL_UP)
            {
              /*set bit for pinn in port F to select pull up resistor*/
              SET_BIT(GPIOF->PUR,Pin);
              /*diable pull down for same pin*/
              CLEAR_BIT(GPIOF->PDR,Pin);
            }else if(ConfigPtr->pinInternalResistor==PORT_RESISTOR_PULL_DOWN)
            {
              /*set bit for pinn in port F to select pull down resistor*/
              
              SET_BIT(GPIOF->PDR,Pin);
              /*diable pull UP for same pin*/
              CLEAR_BIT(GPIOF->PUR,Pin);
            }else
            {
              /*disable pull up and pull down for resistor*/
              CLEAR_BIT(GPIOF->PUR,Pin);
              CLEAR_BIT(GPIOF->PDR,Pin);
            }
          }else
          {
            SET_BIT(GPIOF->DIR,Pin);
            /*write the inntial value for pin in  DATA reg*/
            if(ConfigPtr->pinInitialLevel==PORT_PIN_LEVEL_LOW)
            {
              CLEAR_BIT(GPIOF->DATA,Pin);
            }else
            {
              SET_BIT(GPIOF->DATA,Pin);
            }
          }
          /*ENABLE PIN AS DIGIATAL INPUT OUTPUT BIN*/
        SET_BIT(GPIOF->DEN,Pin);
      }
      Port_status=1;
      /*enable all interrupt*/
      /*__ASM("CPSIE I");*/
      __enable_irq();
}
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
void Port_SetPinDirection (Port_PinType Pin,Port_PinDirectionType Direction)
{
   uint8_t PORT=Pin/10;
   uint8_t  PIN=Pin%10;
  #if PORT_DEV_ERROR_DETECT ==STD_ON
     if(Pin >64||Pin==18||Pin==19||Pin==28||Pin==29||Pin==38||Pin==39)
      {
        /*report error for det Invalid Port Pin ID requested*/
        Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,Port_SetPinDirection_ID , PORT_E_PARAM_PIN  );
        
      }
  #endif
  switch (PORT)
    {
    case 0:
      if(PortA_Configuration[PIN].isPinModeChangable==STD_ON)
        {
          if(Direction==PORT_PIN_IN)
          {
             CLEAR_BIT(GPIOA->DIR,PIN);
          }else if(Direction==PORT_PIN_OUT)
          {
            SET_BIT(GPIOA->DIR,PIN);
            if(PortA_Configuration[PIN].pinInitialLevel==PORT_PIN_LEVEL_LOW)
              {
                CLEAR_BIT(GPIOA->DATA,PIN);
              }else
              {
                SET_BIT(GPIOA->DATA,PIN);
              }
          }else
          {
            /*report error to Det*/
            Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,Port_SetPinDirection_ID , PORT_E_PARAM_INVALID_MODE  );
          }
        }else
        {
          /*report error to Det*/
          Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,Port_SetPinDirection_ID , PORT_E_DIRECTION_UNCHANGEABLE  );
        }
      break;
    case 1:
      if(PortB_Configuration[PIN].isPinModeChangable==STD_ON)
        {
          if(Direction==PORT_PIN_IN)
          {
             CLEAR_BIT(GPIOB->DIR,PIN);
          }else if(Direction==PORT_PIN_OUT)
          {
            SET_BIT(GPIOB->DIR,PIN);
            if(PortB_Configuration[PIN].pinInitialLevel==PORT_PIN_LEVEL_LOW)
              {
                CLEAR_BIT(GPIOB->DATA,PIN);
              }else
              {
                SET_BIT(GPIOB->DATA,PIN);
              }
          }else
          {
            /*report error to Det*/
          }
        }else
        {
          /*report error to Det*/
        }
      break;
    case 2:
      if(PortC_Configuration[PIN].isPinModeChangable==STD_ON)
        {
          if(Direction==PORT_PIN_IN)
          {
             CLEAR_BIT(GPIOC->DIR,PIN);
          }else if(Direction==PORT_PIN_OUT)
          {
            SET_BIT(GPIOC->DIR,PIN);
            if(PortC_Configuration[PIN].pinInitialLevel==PORT_PIN_LEVEL_LOW)
              {
                CLEAR_BIT(GPIOC->DATA,PIN);
              }else
              {
                SET_BIT(GPIOC->DATA,PIN);
              }
          }else
          {
            /*report error to Det*/
          }
        }else
        {
          /*report error to Det*/
        }
      break;
    case 3:
      if(PortD_Configuration[PIN].isPinModeChangable==STD_ON)
        {
          if(Direction==PORT_PIN_IN)
          {
             CLEAR_BIT(GPIOD->DIR,PIN);
          }else if(Direction==PORT_PIN_OUT)
          {
            SET_BIT(GPIOD->DIR,PIN);
            if(PortD_Configuration[PIN].pinInitialLevel==PORT_PIN_LEVEL_LOW)
              {
                CLEAR_BIT(GPIOD->DATA,PIN);
              }else
              {
                SET_BIT(GPIOD->DATA,PIN);
              }
          }else
          {
            /*report error to Det*/
          }
        }else
        {
          /*report error to Det*/
        }
      break;
    case 4:
      if(PortE_Configuration[PIN].isPinModeChangable==STD_ON)
        {
          if(Direction==PORT_PIN_IN)
          {
             CLEAR_BIT(GPIOE->DIR,PIN);
          }else if(Direction==PORT_PIN_OUT)
          {
            SET_BIT(GPIOE->DIR,PIN);
            if(PortE_Configuration[PIN].pinInitialLevel==PORT_PIN_LEVEL_LOW)
              {
                CLEAR_BIT(GPIOE->DATA,PIN);
              }else
              {
                SET_BIT(GPIOE->DATA,PIN);
              }
          }else
          {
            /*report error to Det*/
          }
        }else
        {
          /*report error to Det*/
        }
      break;
    case 5:
      if(PortF_Configuration[PIN].isPinModeChangable==STD_ON)
        {
          if(Direction==PORT_PIN_IN)
          {
             CLEAR_BIT(GPIOF->DIR,PIN);
          }else if(Direction==PORT_PIN_OUT)
          {
            SET_BIT(GPIOF->DIR,PIN);
            if(PortF_Configuration[PIN].pinInitialLevel==PORT_PIN_LEVEL_LOW)
              {
                CLEAR_BIT(GPIOF->DATA,PIN);
              }else
              {
                SET_BIT(GPIOF->DATA,PIN);
              }
          }else
          {
            /*report error to Det*/
          }
        }else
        {
          /*report error to Det*/
        }
      break;
    
    }
  
}
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
/*
  The function Port_RefreshPortDirection shall refresh the direction of all configured ports to the configured direction 
*/
void Port_RefreshPortDirection (void)
{
  uint8_t count;
  #if(PORT_DEV_ERROR_DETECT==STD_ON)
    
      if(Port_status==PORT_NOT_INITIALIZED )
          {
            /*Report error to det that the port not init*/
          }else
          {
            /*no action */
          }
    
   #endif
  for(count=0;count<PORTA_PIN_NUMBER;count++)
  {
   Port_SetPinDirection (PortA_Configuration[count].pinId,PortA_Configuration[count].Pin_Direction);
  }
  for(count=0;count<PORTB_PIN_NUMBER;count++)
  {
   Port_SetPinDirection (PortB_Configuration[count].pinId,PortB_Configuration[count].Pin_Direction);
  }
  for(count=0;count<PORTC_PIN_NUMBER;count++)
  {
   Port_SetPinDirection (PortC_Configuration[count].pinId,PortC_Configuration[count].Pin_Direction);
  }
  for(count=0;count<PORTD_PIN_NUMBER;count++)
  {
   Port_SetPinDirection(PortD_Configuration[count].pinId,PortD_Configuration[count].Pin_Direction);
  }
  for(count=0;count<PORTE_PIN_NUMBER;count++)
  {
   Port_SetPinDirection(PortE_Configuration[count].pinId,PortE_Configuration[count].Pin_Direction);
  }
  for(count=0;count<PORTF_PIN_NUMBER;count++)
  {
   Port_SetPinDirection (PortF_Configuration[count].pinId,PortF_Configuration[count].Pin_Direction);
  }
}
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
  void Port_GetVersionInfo (Std_VersionInfoType* versioninfo)
    {
      
    }

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
void Port_SetPinMode (Port_PinType Pin,Port_PinModeType Mode)
  {
    uint8_t PORT=Pin/10;
    uint8_t PIN=Pin%10;
    
     #if(PORT_DEV_ERROR_DETECT==STD_ON)
    
      if(Port_status==PORT_NOT_INITIALIZED )
          {
            /*Report error to det that the port not init*/
          }else
          {
            /*no action */
          }
      if(Pin >64||Pin==18||Pin==19||Pin==28||Pin==29||Pin==38||Pin==39)
      {
        /*report error for det Invalid Port Pin ID requested*/
      }else
      {
        /*No action*/
      }
      if(Mode>PORT_PIN_MODE_MIX||Mode<0)
      {
        /*Report error mode to det*/
      }else
      {
        /*NO Action*/
      }
      switch(PORT)
        {
        case 1:
          if(PortA_Configuration[PIN].isPinModeChangable==STD_OFF)
          {
            /*Report error to det*/
            /*?If Det is enabled, the function Port_SetPinMode shall report PORT_E_MODE_UNCHANGEABLE error and return without any other action, if the parameter PortPinModeChangeable is set to FALSE*/
          }else
           {
             /*No action*/
           }
          break;
        case 2:
          if(PortB_Configuration[PIN].isPinModeChangable==STD_OFF)
          {
            /*Report error to det*/
            /*?If Det is enabled, the function Port_SetPinMode shall report PORT_E_MODE_UNCHANGEABLE error and return without any other action, if the parameter PortPinModeChangeable is set to FALSE*/
          }else
           {
             /*No action*/
           }
          break;
        case 3:
          if(PortC_Configuration[PIN].isPinModeChangable==STD_OFF)
          {
            /*Report error to det*/
            /*?If Det is enabled, the function Port_SetPinMode shall report PORT_E_MODE_UNCHANGEABLE error and return without any other action, if the parameter PortPinModeChangeable is set to FALSE*/
          }else
           {
             /*No action*/
           }
          break;
        case 4:
          if(PortD_Configuration[PIN].isPinModeChangable==STD_OFF)
          {
            /*Report error to det*/
            /*?If Det is enabled, the function Port_SetPinMode shall report PORT_E_MODE_UNCHANGEABLE error and return without any other action, if the parameter PortPinModeChangeable is set to FALSE*/
          }else
           {
             /*No action*/
           }
          break;
        case 5:
          if(PortE_Configuration[PIN].isPinModeChangable==STD_OFF)
          {
            /*Report error to det*/
            /*?If Det is enabled, the function Port_SetPinMode shall report PORT_E_MODE_UNCHANGEABLE error and return without any other action, if the parameter PortPinModeChangeable is set to FALSE*/
          }else
           {
             /*No action*/
           }
          break;
        case 6:
          if(PortF_Configuration[PIN].isPinModeChangable==STD_OFF)
          {
            /*Report error to det*/
            /*?If Det is enabled, the function Port_SetPinMode shall report PORT_E_MODE_UNCHANGEABLE error and return without any other action, if the parameter PortPinModeChangeable is set to FALSE*/
          }else
           {
             /*No action*/
           }
          break;
        
        }
    
   #endif
        /*Set pin as Altra funcation*/
        switch(PORT)
        {
          case 1:
            /*Set pin in port A as Altra funcation*/
            SET_BIT(GPIOA->AFSEL,PIN);
            /*CHoose the mode of the pin*/
            GPIOA->PCTL|=(Mode<<(PIN*4));
            break;
          case 2:
            /*Set pin in port B as Altra funcation*/
            SET_BIT(GPIOB->AFSEL,PIN);
            /*CHoose the mode of the pin*/
            GPIOB->PCTL|=(Mode<<(PIN*4));
            break;
          case 3:
            /*Set pin in port C as Altra funcation*/
            SET_BIT(GPIOC->AFSEL,PIN);
            /*CHoose the mode of the pin*/
            GPIOC->PCTL|=(Mode<<(PIN*4));
            break;
          case 4:
            /*Set pin in port D as Altra funcation*/
            SET_BIT(GPIOD->AFSEL,PIN);
            /*CHoose the mode of the pin*/
            GPIOD->PCTL|=(Mode<<(PIN*4));
            break;
          case 5:
            /*Set pin in port E as Altra funcation*/
            SET_BIT(GPIOE->AFSEL,PIN);
            /*CHoose the mode of the pin*/
            GPIOE->PCTL|=(Mode<<(PIN*4));
            break;
          case 6:
            /*Set pin in port F as Altra funcation*/
            SET_BIT(GPIOF->AFSEL,PIN);
            /*CHoose the mode of the pin*/
            GPIOF->PCTL|=(Mode<<(PIN*4));
            break;
        }
    
  }

#endif