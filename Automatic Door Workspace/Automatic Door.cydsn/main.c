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
#include "project.h"
#include <global.h>

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    isr_start_backward_Enable();
    isr_start_forward_Enable();
    isr_stop_Enable();
    
    isr_start_backward_SetPriority(1);
    isr_start_forward_SetPriority(1);
    isr_stop_SetPriority(0);
    //Set stopping the motoors to be the highest priority ISR
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
