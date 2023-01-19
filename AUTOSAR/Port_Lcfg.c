#include "Port.h"
/*
  * AUTOSAR Version 4.3.0
  */
#define PORT_LCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_LCFG_AR_RELEASE_MINOR_VERSION     (3U)
#define PORT_LCFG_AR_RELEASE_PATCH_VERSION     (0U)
/*intialize pin for port A */
const Port_ConfigType PortA_Configuration[PORTA_PIN_NUMBER]=
{
  [0]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_A0_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [1]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_A1_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [2]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_A2_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [3]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_A3_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [4]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_A4_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [5]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_A5_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [6]=
    {
      .Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_A6_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [7]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_A7_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    
  
};
/*intialize pin for port B */
const Port_ConfigType PortB_Configuration[PORTB_PIN_NUMBER]=
{
  [0]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_B0_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [1]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_B1_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [2]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_B2_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [3]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_B3_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [4]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_B4_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [5]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_B5_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [6]=
    {
      .Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_B6_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [7]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_B7_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    
  
};
/*intialize pin for port C */
const Port_ConfigType PortC_Configuration[PORTC_PIN_NUMBER]=
{
  [0]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_C0_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [1]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_C1_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [2]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_C2_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [3]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_C3_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [4]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_C4_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [5]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_C5_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [6]=
    {
      .Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_C6_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [7]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_C7_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    
  
};
/*intialize pin for port D */
const Port_ConfigType PortD_Configuration[PORTD_PIN_NUMBER]=
{
  [0]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_D0_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [1]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_D1_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [2]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_D2_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [3]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_D3_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [4]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_D4_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [5]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_D5_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [6]=
    {
      .Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_D6_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [7]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_D7_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    
  
};
/*intialize pin for port E */
const Port_ConfigType PortE_Configuration[PORTE_PIN_NUMBER]=
{
  [0]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_E0_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [1]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_E1_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [2]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_E2_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [3]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_E3_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [4]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_E4_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [5]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_E5_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    
  
};
/*intialize pin for port F */
const Port_ConfigType PortF_Configuration[PORTF_PIN_NUMBER]=
{
  [0]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_F0_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [1]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_F1_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [2]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_F2_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [3]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_F3_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    [4]=
    {.Pin_Direction=PORT_PIN_OUT,
      .pinId=PortPin_F4_ID,
      .pinInitialMode=PORT_PIN_MODE_DIO,
      .pinInitialLevel=PORT_PIN_LEVEL_HIGH,
      .pinMode=PORT_PIN_MODE_DIO,
      .isPinModeChangable=STD_OFF,
      .pinInternalResistor=PORT_RESISTOR_OFF
      
      
    },
    
    
  
};
