#include "Port.h"
#include "Dio.h"
int main ()
{
  uint16 i,j;
  Port_ConfigType test;
  test.isDirectionChangable=STD_OFF;
  test.pinId=PortPin_F1_ID;
  test.pinInitialLevel=PORT_PIN_LEVEL_LOW;
  test.Pin_Direction=PORT_PIN_OUT;
  Port_Init(&test);
  
  //SYSCTL->RCGCGPIO|=(1<<5)|(1<<4)|(1<<3)|(1<<2)|(1<<1);
	//GPIOF->DIR=0x0E;
  //GPIOF->DATA|=0x02;
  //GPIOF->DATA|=0x04;
  while(1){
    Dio_WriteChannel(CHANNEL_F1_ID,STD_HIGH);
    for( i=0;i<255;i++)
      {
        for(j=0;j<1000;j++);
      }
      
     Dio_WriteChannel(CHANNEL_F1_ID,STD_LOW);
    for( i=0;i<255;i++)
      {
        for(j=0;j<1000;j++);
      }
  
  }
  
  return 0;
}
