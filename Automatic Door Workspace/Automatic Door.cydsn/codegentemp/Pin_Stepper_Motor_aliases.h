/*******************************************************************************
* File Name: Pin_Stepper_Motor.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Pin_Stepper_Motor_ALIASES_H) /* Pins Pin_Stepper_Motor_ALIASES_H */
#define CY_PINS_Pin_Stepper_Motor_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Pin_Stepper_Motor_0			(Pin_Stepper_Motor__0__PC)
#define Pin_Stepper_Motor_0_INTR	((uint16)((uint16)0x0001u << Pin_Stepper_Motor__0__SHIFT))

#define Pin_Stepper_Motor_1			(Pin_Stepper_Motor__1__PC)
#define Pin_Stepper_Motor_1_INTR	((uint16)((uint16)0x0001u << Pin_Stepper_Motor__1__SHIFT))

#define Pin_Stepper_Motor_2			(Pin_Stepper_Motor__2__PC)
#define Pin_Stepper_Motor_2_INTR	((uint16)((uint16)0x0001u << Pin_Stepper_Motor__2__SHIFT))

#define Pin_Stepper_Motor_3			(Pin_Stepper_Motor__3__PC)
#define Pin_Stepper_Motor_3_INTR	((uint16)((uint16)0x0001u << Pin_Stepper_Motor__3__SHIFT))

#define Pin_Stepper_Motor_INTR_ALL	 ((uint16)(Pin_Stepper_Motor_0_INTR| Pin_Stepper_Motor_1_INTR| Pin_Stepper_Motor_2_INTR| Pin_Stepper_Motor_3_INTR))

#endif /* End Pins Pin_Stepper_Motor_ALIASES_H */


/* [] END OF FILE */
