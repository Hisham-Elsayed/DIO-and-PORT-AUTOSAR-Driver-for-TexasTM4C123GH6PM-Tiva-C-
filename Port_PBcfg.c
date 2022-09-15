 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.C
 *
 * Description: Post-Build Configuration Source file for Port Module
 *              
 *                             
 *             
 * Author: Hisham Elsayed 
 ******************************************************************************/
#include "Port.h"


/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION           (1U)
#define PORT_PBCFG_SW_MINOR_VERSION           (0U)
#define PORT_PBCFG_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION   (3U)

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with Port_Init API */   
 const Port_ConfigType Port_Configuration = 
 {
   PortConfig_PORTA_NUM,PortConfig_PIN0_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTA_NUM,PortConfig_PIN1_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTA_NUM,PortConfig_PIN2_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTA_NUM,PortConfig_PIN3_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTA_NUM,PortConfig_PIN4_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTA_NUM,PortConfig_PIN5_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTA_NUM,PortConfig_PIN6_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTA_NUM,PortConfig_PIN7_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   
   PortConfig_PORTB_NUM,PortConfig_PIN0_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTB_NUM,PortConfig_PIN1_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTB_NUM,PortConfig_PIN2_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTB_NUM,PortConfig_PIN3_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTB_NUM,PortConfig_PIN4_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTB_NUM,PortConfig_PIN5_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTB_NUM,PortConfig_PIN6_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON, 
   PortConfig_PORTB_NUM,PortConfig_PIN7_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON, 
 
   PortConfig_PORTC_NUM,PortConfig_PIN0_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTC_NUM,PortConfig_PIN1_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON, 
   PortConfig_PORTC_NUM,PortConfig_PIN2_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON, 
   PortConfig_PORTC_NUM,PortConfig_PIN3_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTC_NUM,PortConfig_PIN4_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTC_NUM,PortConfig_PIN5_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTC_NUM,PortConfig_PIN6_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTC_NUM,PortConfig_PIN7_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON, 
   
   PortConfig_PORTD_NUM,PortConfig_PIN0_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTD_NUM,PortConfig_PIN1_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTD_NUM,PortConfig_PIN2_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTD_NUM,PortConfig_PIN3_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTD_NUM,PortConfig_PIN4_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTD_NUM,PortConfig_PIN5_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTD_NUM,PortConfig_PIN6_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTD_NUM,PortConfig_PIN7_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   
   PortConfig_PORTE_NUM,PortConfig_PIN0_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTE_NUM,PortConfig_PIN1_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTE_NUM,PortConfig_PIN2_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTE_NUM,PortConfig_PIN3_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTE_NUM,PortConfig_PIN4_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTE_NUM,PortConfig_PIN5_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON, 
  
   PortConfig_PORTF_NUM,PortConfig_PIN0_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTF_NUM,PortConfig_PIN1_NUM,PORT_PIN_OUT,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_OFF,
   PortConfig_PORTF_NUM,PortConfig_PIN2_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTF_NUM,PortConfig_PIN3_NUM,PORT_PIN_IN,OFF,DIRECTION_ON,STD_LOW,PortConfig_Mode_GPIO,MODE_CHANGE_ON,
   PortConfig_PORTF_NUM,PortConfig_PIN4_NUM,PORT_PIN_IN,PULL_UP,DIRECTION_OFF,STD_HIGH,PortConfig_Mode_GPIO,MODE_CHANGE_OFF,
 };
   
   
   

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   






