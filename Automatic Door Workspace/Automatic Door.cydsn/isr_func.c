/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include <isr_func.h>

inline void start_motor_forward(void)
{
    Pin_DC_Motor_Write(0b10);   
}

inline void start_motor_backward(void)
{
    Pin_DC_Motor_Write(0b01);
}

inline void stop_motor(void)
{
    Pin_DC_Motor_Write(0b00);
}

/* [] END OF FILE */
