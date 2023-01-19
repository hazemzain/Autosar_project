#include "Dio.h"




/*init pin */

const Dio_ConfigType Dio_Config = {
  .Channels[DioConf_LED1_CHANNEL_ID_INDEX].Ch_Num=DioConf_LED1_CHANNEL_NUM,
  .Channels[DioConf_LED1_CHANNEL_ID_INDEX].Port_Num=DioConf_LED1_PORT_NUM,
  .Channels[DioConf_LED2_CHANNEL_ID_INDEX ].Ch_Num =DioConf_LED2_CHANNEL_NUM,
	.Channels[DioConf_LED2_CHANNEL_ID_INDEX ].Port_Num =DioConf_LED2_PORT_NUM,
	.Channels[DioConf_BUTTON1_CHANNEL_ID_INDEX ].Ch_Num =DioConf_BUTTON1_CHANNEL_NUM,
	.Channels[DioConf_BUTTON1_CHANNEL_ID_INDEX ].Port_Num =DioConf_BUTTON1_PORT_NUM,
	.Channels[DioConf_BUTTON2_CHANNEL_ID_INDEX ].Ch_Num =DioConf_BUTTON2_CHANNEL_NUM,
	.Channels[DioConf_BUTTON2_CHANNEL_ID_INDEX ].Port_Num =DioConf_BUTTON2_PORT_NUM,
  .ports[DioConf_PORT1_PORT_ID_INDEX]=DioConf_PORT1_PORT_NUM ,
  .ports[DioConf_PORT2_PORT_ID_INDEX]=DioConf_PORT2_PORT_NUM ,
  .groups[DioConf_RGP_CHANNEL_GROUP_INDEX ].port =DioConf_RGB_PORT_NUM,
	.groups[DioConf_RGP_CHANNEL_GROUP_INDEX ].offset =DioConf_RGB_CHANNEL_GROUP_OFFSET,
	.groups[DioConf_RGP_CHANNEL_GROUP_INDEX ].mask =DioConf_RGB_CHANNEL_GROUP_MASK,

	.groups[DioConf_RGP1_CHANNEL_GROUP_INDEX ].port =DioConf_RGB1_PORT_NUM,
	.groups[DioConf_RGP1_CHANNEL_GROUP_INDEX ].offset =DioConf_RGB1_CHANNEL_GROUP_OFFSET,
	.groups[DioConf_RGP1_CHANNEL_GROUP_INDEX ].mask =DioConf_RGB1_CHANNEL_GROUP_MASK
  
};