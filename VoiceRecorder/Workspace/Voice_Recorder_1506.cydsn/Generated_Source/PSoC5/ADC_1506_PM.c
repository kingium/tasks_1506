/*******************************************************************************
* File Name: ADC_1506_PM.c
* Version 3.20
*
* Description:
*  This file provides the power manager source code to the API for the
*  Delta-Sigma ADC Component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "ADC_1506.h"

static ADC_1506_BACKUP_STRUCT ADC_1506_backup =
{
    ADC_1506_DISABLED,
    ADC_1506_CFG1_DEC_CR
};


/*******************************************************************************
* Function Name: ADC_1506_SaveConfig
********************************************************************************
*
* Summary:
*  Save the register configuration which are not retention.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  ADC_1506_backup:  This global structure variable is used to store
*  configuration registers which are non retention whenever user wants to go
*  sleep mode by calling Sleep() API.
*
*******************************************************************************/
void ADC_1506_SaveConfig(void) 
{
    ADC_1506_backup.deccr = ADC_1506_DEC_CR_REG;
}


/*******************************************************************************
* Function Name: ADC_1506_RestoreConfig
********************************************************************************
*
* Summary:
*  Restore the register configurations which are not retention.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  ADC_1506_backup:  This global structure variable is used to restore
*  configuration registers which are non retention whenever user wants to switch
*  to active power mode by calling Wakeup() API.
*
*******************************************************************************/
void ADC_1506_RestoreConfig(void) 
{
    ADC_1506_DEC_CR_REG = ADC_1506_backup.deccr;
}


/*******************************************************************************
* Function Name: ADC_1506_Sleep
********************************************************************************
*
* Summary:
*  Stops the operation of the block and saves the user configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  ADC_1506_backup:  The structure field 'enableState' is modified
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void ADC_1506_Sleep(void) 
{
    /* Save ADC enable state */
    if((ADC_1506_ACT_PWR_DEC_EN == (ADC_1506_PWRMGR_DEC_REG & ADC_1506_ACT_PWR_DEC_EN)) &&
       (ADC_1506_ACT_PWR_DSM_EN == (ADC_1506_PWRMGR_DSM_REG & ADC_1506_ACT_PWR_DSM_EN)))
    {
        /* Component is enabled */
        ADC_1506_backup.enableState = ADC_1506_ENABLED;
        if((ADC_1506_DEC_CR_REG & ADC_1506_DEC_START_CONV) != 0u)
        {   
            /* Conversion is started */
            ADC_1506_backup.enableState |= ADC_1506_STARTED;
        }
		
        /* Stop the configuration */
        ADC_1506_Stop();
    }
    else
    {
        /* Component is disabled */
        ADC_1506_backup.enableState = ADC_1506_DISABLED;
    }

    /* Save the user configuration */
    ADC_1506_SaveConfig();
}


/*******************************************************************************
* Function Name: ADC_1506_Wakeup
********************************************************************************
*
* Summary:
*  Restores the user configuration and enables the power to the block.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  ADC_1506_backup:  The structure field 'enableState' is used to
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void ADC_1506_Wakeup(void) 
{
    /* Restore the configuration */
    ADC_1506_RestoreConfig();

    /* Enables the component operation */
    if(ADC_1506_backup.enableState != ADC_1506_DISABLED)
    {
        ADC_1506_Enable();
        if((ADC_1506_backup.enableState & ADC_1506_STARTED) != 0u)
        {
            ADC_1506_StartConvert();
        }
    } /* Do nothing if component was disable before */
}


/* [] END OF FILE */
