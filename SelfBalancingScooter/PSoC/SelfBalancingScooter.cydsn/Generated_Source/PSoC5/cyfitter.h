#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* LCD_LCDPort */
#define LCD_LCDPort__0__INTTYPE CYREG_PICU2_INTTYPE0
#define LCD_LCDPort__0__MASK 0x01u
#define LCD_LCDPort__0__PC CYREG_PRT2_PC0
#define LCD_LCDPort__0__PORT 2u
#define LCD_LCDPort__0__SHIFT 0
#define LCD_LCDPort__1__INTTYPE CYREG_PICU2_INTTYPE1
#define LCD_LCDPort__1__MASK 0x02u
#define LCD_LCDPort__1__PC CYREG_PRT2_PC1
#define LCD_LCDPort__1__PORT 2u
#define LCD_LCDPort__1__SHIFT 1
#define LCD_LCDPort__2__INTTYPE CYREG_PICU2_INTTYPE2
#define LCD_LCDPort__2__MASK 0x04u
#define LCD_LCDPort__2__PC CYREG_PRT2_PC2
#define LCD_LCDPort__2__PORT 2u
#define LCD_LCDPort__2__SHIFT 2
#define LCD_LCDPort__3__INTTYPE CYREG_PICU2_INTTYPE3
#define LCD_LCDPort__3__MASK 0x08u
#define LCD_LCDPort__3__PC CYREG_PRT2_PC3
#define LCD_LCDPort__3__PORT 2u
#define LCD_LCDPort__3__SHIFT 3
#define LCD_LCDPort__4__INTTYPE CYREG_PICU2_INTTYPE4
#define LCD_LCDPort__4__MASK 0x10u
#define LCD_LCDPort__4__PC CYREG_PRT2_PC4
#define LCD_LCDPort__4__PORT 2u
#define LCD_LCDPort__4__SHIFT 4
#define LCD_LCDPort__5__INTTYPE CYREG_PICU2_INTTYPE5
#define LCD_LCDPort__5__MASK 0x20u
#define LCD_LCDPort__5__PC CYREG_PRT2_PC5
#define LCD_LCDPort__5__PORT 2u
#define LCD_LCDPort__5__SHIFT 5
#define LCD_LCDPort__6__INTTYPE CYREG_PICU2_INTTYPE6
#define LCD_LCDPort__6__MASK 0x40u
#define LCD_LCDPort__6__PC CYREG_PRT2_PC6
#define LCD_LCDPort__6__PORT 2u
#define LCD_LCDPort__6__SHIFT 6
#define LCD_LCDPort__AG CYREG_PRT2_AG
#define LCD_LCDPort__AMUX CYREG_PRT2_AMUX
#define LCD_LCDPort__BIE CYREG_PRT2_BIE
#define LCD_LCDPort__BIT_MASK CYREG_PRT2_BIT_MASK
#define LCD_LCDPort__BYP CYREG_PRT2_BYP
#define LCD_LCDPort__CTL CYREG_PRT2_CTL
#define LCD_LCDPort__DM0 CYREG_PRT2_DM0
#define LCD_LCDPort__DM1 CYREG_PRT2_DM1
#define LCD_LCDPort__DM2 CYREG_PRT2_DM2
#define LCD_LCDPort__DR CYREG_PRT2_DR
#define LCD_LCDPort__INP_DIS CYREG_PRT2_INP_DIS
#define LCD_LCDPort__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define LCD_LCDPort__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LCD_LCDPort__LCD_EN CYREG_PRT2_LCD_EN
#define LCD_LCDPort__MASK 0x7Fu
#define LCD_LCDPort__PORT 2u
#define LCD_LCDPort__PRT CYREG_PRT2_PRT
#define LCD_LCDPort__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LCD_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LCD_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LCD_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LCD_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LCD_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LCD_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LCD_LCDPort__PS CYREG_PRT2_PS
#define LCD_LCDPort__SHIFT 0
#define LCD_LCDPort__SLW CYREG_PRT2_SLW

/* RX_1 */
#define RX_1__0__INTTYPE CYREG_PICU5_INTTYPE6
#define RX_1__0__MASK 0x40u
#define RX_1__0__PC CYREG_PRT5_PC6
#define RX_1__0__PORT 5u
#define RX_1__0__SHIFT 6
#define RX_1__AG CYREG_PRT5_AG
#define RX_1__AMUX CYREG_PRT5_AMUX
#define RX_1__BIE CYREG_PRT5_BIE
#define RX_1__BIT_MASK CYREG_PRT5_BIT_MASK
#define RX_1__BYP CYREG_PRT5_BYP
#define RX_1__CTL CYREG_PRT5_CTL
#define RX_1__DM0 CYREG_PRT5_DM0
#define RX_1__DM1 CYREG_PRT5_DM1
#define RX_1__DM2 CYREG_PRT5_DM2
#define RX_1__DR CYREG_PRT5_DR
#define RX_1__INP_DIS CYREG_PRT5_INP_DIS
#define RX_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU5_BASE
#define RX_1__LCD_COM_SEG CYREG_PRT5_LCD_COM_SEG
#define RX_1__LCD_EN CYREG_PRT5_LCD_EN
#define RX_1__MASK 0x40u
#define RX_1__PORT 5u
#define RX_1__PRT CYREG_PRT5_PRT
#define RX_1__PRTDSI__CAPS_SEL CYREG_PRT5_CAPS_SEL
#define RX_1__PRTDSI__DBL_SYNC_IN CYREG_PRT5_DBL_SYNC_IN
#define RX_1__PRTDSI__OE_SEL0 CYREG_PRT5_OE_SEL0
#define RX_1__PRTDSI__OE_SEL1 CYREG_PRT5_OE_SEL1
#define RX_1__PRTDSI__OUT_SEL0 CYREG_PRT5_OUT_SEL0
#define RX_1__PRTDSI__OUT_SEL1 CYREG_PRT5_OUT_SEL1
#define RX_1__PRTDSI__SYNC_OUT CYREG_PRT5_SYNC_OUT
#define RX_1__PS CYREG_PRT5_PS
#define RX_1__SHIFT 6
#define RX_1__SLW CYREG_PRT5_SLW

/* Tx_1 */
#define Tx_1__0__INTTYPE CYREG_PICU4_INTTYPE3
#define Tx_1__0__MASK 0x08u
#define Tx_1__0__PC CYREG_PRT4_PC3
#define Tx_1__0__PORT 4u
#define Tx_1__0__SHIFT 3
#define Tx_1__AG CYREG_PRT4_AG
#define Tx_1__AMUX CYREG_PRT4_AMUX
#define Tx_1__BIE CYREG_PRT4_BIE
#define Tx_1__BIT_MASK CYREG_PRT4_BIT_MASK
#define Tx_1__BYP CYREG_PRT4_BYP
#define Tx_1__CTL CYREG_PRT4_CTL
#define Tx_1__DM0 CYREG_PRT4_DM0
#define Tx_1__DM1 CYREG_PRT4_DM1
#define Tx_1__DM2 CYREG_PRT4_DM2
#define Tx_1__DR CYREG_PRT4_DR
#define Tx_1__INP_DIS CYREG_PRT4_INP_DIS
#define Tx_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define Tx_1__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define Tx_1__LCD_EN CYREG_PRT4_LCD_EN
#define Tx_1__MASK 0x08u
#define Tx_1__PORT 4u
#define Tx_1__PRT CYREG_PRT4_PRT
#define Tx_1__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define Tx_1__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define Tx_1__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define Tx_1__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define Tx_1__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define Tx_1__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define Tx_1__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define Tx_1__PS CYREG_PRT4_PS
#define Tx_1__SHIFT 3
#define Tx_1__SLW CYREG_PRT4_SLW

/* Tx_2 */
#define Tx_2__0__INTTYPE CYREG_PICU4_INTTYPE5
#define Tx_2__0__MASK 0x20u
#define Tx_2__0__PC CYREG_PRT4_PC5
#define Tx_2__0__PORT 4u
#define Tx_2__0__SHIFT 5
#define Tx_2__AG CYREG_PRT4_AG
#define Tx_2__AMUX CYREG_PRT4_AMUX
#define Tx_2__BIE CYREG_PRT4_BIE
#define Tx_2__BIT_MASK CYREG_PRT4_BIT_MASK
#define Tx_2__BYP CYREG_PRT4_BYP
#define Tx_2__CTL CYREG_PRT4_CTL
#define Tx_2__DM0 CYREG_PRT4_DM0
#define Tx_2__DM1 CYREG_PRT4_DM1
#define Tx_2__DM2 CYREG_PRT4_DM2
#define Tx_2__DR CYREG_PRT4_DR
#define Tx_2__INP_DIS CYREG_PRT4_INP_DIS
#define Tx_2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define Tx_2__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define Tx_2__LCD_EN CYREG_PRT4_LCD_EN
#define Tx_2__MASK 0x20u
#define Tx_2__PORT 4u
#define Tx_2__PRT CYREG_PRT4_PRT
#define Tx_2__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define Tx_2__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define Tx_2__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define Tx_2__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define Tx_2__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define Tx_2__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define Tx_2__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define Tx_2__PS CYREG_PRT4_PS
#define Tx_2__SHIFT 5
#define Tx_2__SLW CYREG_PRT4_SLW

/* Tx_3 */
#define Tx_3__0__INTTYPE CYREG_PICU4_INTTYPE7
#define Tx_3__0__MASK 0x80u
#define Tx_3__0__PC CYREG_PRT4_PC7
#define Tx_3__0__PORT 4u
#define Tx_3__0__SHIFT 7
#define Tx_3__AG CYREG_PRT4_AG
#define Tx_3__AMUX CYREG_PRT4_AMUX
#define Tx_3__BIE CYREG_PRT4_BIE
#define Tx_3__BIT_MASK CYREG_PRT4_BIT_MASK
#define Tx_3__BYP CYREG_PRT4_BYP
#define Tx_3__CTL CYREG_PRT4_CTL
#define Tx_3__DM0 CYREG_PRT4_DM0
#define Tx_3__DM1 CYREG_PRT4_DM1
#define Tx_3__DM2 CYREG_PRT4_DM2
#define Tx_3__DR CYREG_PRT4_DR
#define Tx_3__INP_DIS CYREG_PRT4_INP_DIS
#define Tx_3__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define Tx_3__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define Tx_3__LCD_EN CYREG_PRT4_LCD_EN
#define Tx_3__MASK 0x80u
#define Tx_3__PORT 4u
#define Tx_3__PRT CYREG_PRT4_PRT
#define Tx_3__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define Tx_3__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define Tx_3__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define Tx_3__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define Tx_3__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define Tx_3__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define Tx_3__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define Tx_3__PS CYREG_PRT4_PS
#define Tx_3__SHIFT 7
#define Tx_3__SLW CYREG_PRT4_SLW

/* UART_1_BUART */
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B0_UDB04_05_A0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B0_UDB04_05_A1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B0_UDB04_05_D0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B0_UDB04_05_D1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB04_05_ACTL
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B0_UDB04_05_F0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B0_UDB04_05_F1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB04_A0_A1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB04_A0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB04_A1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB04_D0_D1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB04_D0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB04_D1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB04_ACTL
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB04_F0_F1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB04_F0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB04_F1
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB05_06_A0
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB05_06_A1
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB05_06_D0
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB05_06_D1
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB05_06_F0
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB05_06_F1
#define UART_1_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB05_A0_A1
#define UART_1_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB05_A0
#define UART_1_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB05_A1
#define UART_1_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB05_D0_D1
#define UART_1_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB05_D0
#define UART_1_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB05_D1
#define UART_1_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define UART_1_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB05_F0_F1
#define UART_1_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB05_F0
#define UART_1_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB05_F1
#define UART_1_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_1_BUART_sTX_TxSts__0__POS 0
#define UART_1_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_1_BUART_sTX_TxSts__1__POS 1
#define UART_1_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define UART_1_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B0_UDB05_06_ST
#define UART_1_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_1_BUART_sTX_TxSts__2__POS 2
#define UART_1_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_1_BUART_sTX_TxSts__3__POS 3
#define UART_1_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_1_BUART_sTX_TxSts__MASK_REG CYREG_B0_UDB05_MSK
#define UART_1_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define UART_1_BUART_sTX_TxSts__STATUS_REG CYREG_B0_UDB05_ST

/* UART_1_IntClock */
#define UART_1_IntClock__CFG0 CYREG_CLKDIST_DCFG4_CFG0
#define UART_1_IntClock__CFG1 CYREG_CLKDIST_DCFG4_CFG1
#define UART_1_IntClock__CFG2 CYREG_CLKDIST_DCFG4_CFG2
#define UART_1_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_1_IntClock__INDEX 0x04u
#define UART_1_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_1_IntClock__PM_ACT_MSK 0x10u
#define UART_1_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_1_IntClock__PM_STBY_MSK 0x10u

/* UART_1_TXInternalInterrupt */
#define UART_1_TXInternalInterrupt__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define UART_1_TXInternalInterrupt__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define UART_1_TXInternalInterrupt__INTC_MASK 0x04u
#define UART_1_TXInternalInterrupt__INTC_NUMBER 2u
#define UART_1_TXInternalInterrupt__INTC_PRIOR_NUM 7u
#define UART_1_TXInternalInterrupt__INTC_PRIOR_REG CYREG_NVIC_PRI_2
#define UART_1_TXInternalInterrupt__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define UART_1_TXInternalInterrupt__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* UART_2_BUART */
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B1_UDB07_08_A0
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B1_UDB07_08_A1
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B1_UDB07_08_D0
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B1_UDB07_08_D1
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B1_UDB07_08_F0
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B1_UDB07_08_F1
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B1_UDB07_A0_A1
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B1_UDB07_A0
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B1_UDB07_A1
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B1_UDB07_D0_D1
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B1_UDB07_D0
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B1_UDB07_D1
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B1_UDB07_F0_F1
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B1_UDB07_F0
#define UART_2_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B1_UDB07_F1
#define UART_2_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB06_07_A0
#define UART_2_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB06_07_A1
#define UART_2_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB06_07_D0
#define UART_2_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB06_07_D1
#define UART_2_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define UART_2_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB06_07_F0
#define UART_2_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB06_07_F1
#define UART_2_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB06_A0_A1
#define UART_2_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB06_A0
#define UART_2_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB06_A1
#define UART_2_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB06_D0_D1
#define UART_2_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB06_D0
#define UART_2_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB06_D1
#define UART_2_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define UART_2_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB06_F0_F1
#define UART_2_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB06_F0
#define UART_2_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB06_F1
#define UART_2_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_2_BUART_sTX_TxSts__0__POS 0
#define UART_2_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_2_BUART_sTX_TxSts__1__POS 1
#define UART_2_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define UART_2_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B0_UDB06_07_ST
#define UART_2_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_2_BUART_sTX_TxSts__2__POS 2
#define UART_2_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_2_BUART_sTX_TxSts__3__POS 3
#define UART_2_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_2_BUART_sTX_TxSts__MASK_REG CYREG_B0_UDB06_MSK
#define UART_2_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define UART_2_BUART_sTX_TxSts__STATUS_REG CYREG_B0_UDB06_ST

/* UART_2_IntClock */
#define UART_2_IntClock__CFG0 CYREG_CLKDIST_DCFG2_CFG0
#define UART_2_IntClock__CFG1 CYREG_CLKDIST_DCFG2_CFG1
#define UART_2_IntClock__CFG2 CYREG_CLKDIST_DCFG2_CFG2
#define UART_2_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_2_IntClock__INDEX 0x02u
#define UART_2_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_2_IntClock__PM_ACT_MSK 0x04u
#define UART_2_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_2_IntClock__PM_STBY_MSK 0x04u

/* UART_2_TXInternalInterrupt */
#define UART_2_TXInternalInterrupt__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define UART_2_TXInternalInterrupt__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define UART_2_TXInternalInterrupt__INTC_MASK 0x08u
#define UART_2_TXInternalInterrupt__INTC_NUMBER 3u
#define UART_2_TXInternalInterrupt__INTC_PRIOR_NUM 7u
#define UART_2_TXInternalInterrupt__INTC_PRIOR_REG CYREG_NVIC_PRI_3
#define UART_2_TXInternalInterrupt__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define UART_2_TXInternalInterrupt__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* UART_3_BUART */
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B1_UDB05_06_A0
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B1_UDB05_06_A1
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B1_UDB05_06_D0
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B1_UDB05_06_D1
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB05_06_ACTL
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B1_UDB05_06_F0
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B1_UDB05_06_F1
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B1_UDB05_A0_A1
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B1_UDB05_A0
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B1_UDB05_A1
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B1_UDB05_D0_D1
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B1_UDB05_D0
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B1_UDB05_D1
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B1_UDB05_ACTL
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B1_UDB05_F0_F1
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B1_UDB05_F0
#define UART_3_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B1_UDB05_F1
#define UART_3_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B1_UDB06_07_A0
#define UART_3_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B1_UDB06_07_A1
#define UART_3_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B1_UDB06_07_D0
#define UART_3_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B1_UDB06_07_D1
#define UART_3_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB06_07_ACTL
#define UART_3_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B1_UDB06_07_F0
#define UART_3_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B1_UDB06_07_F1
#define UART_3_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B1_UDB06_A0_A1
#define UART_3_BUART_sTX_TxShifter_u0__A0_REG CYREG_B1_UDB06_A0
#define UART_3_BUART_sTX_TxShifter_u0__A1_REG CYREG_B1_UDB06_A1
#define UART_3_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B1_UDB06_D0_D1
#define UART_3_BUART_sTX_TxShifter_u0__D0_REG CYREG_B1_UDB06_D0
#define UART_3_BUART_sTX_TxShifter_u0__D1_REG CYREG_B1_UDB06_D1
#define UART_3_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B1_UDB06_ACTL
#define UART_3_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B1_UDB06_F0_F1
#define UART_3_BUART_sTX_TxShifter_u0__F0_REG CYREG_B1_UDB06_F0
#define UART_3_BUART_sTX_TxShifter_u0__F1_REG CYREG_B1_UDB06_F1
#define UART_3_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_3_BUART_sTX_TxSts__0__POS 0
#define UART_3_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_3_BUART_sTX_TxSts__1__POS 1
#define UART_3_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB06_07_ACTL
#define UART_3_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B1_UDB06_07_ST
#define UART_3_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_3_BUART_sTX_TxSts__2__POS 2
#define UART_3_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_3_BUART_sTX_TxSts__3__POS 3
#define UART_3_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_3_BUART_sTX_TxSts__MASK_REG CYREG_B1_UDB06_MSK
#define UART_3_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B1_UDB06_ACTL
#define UART_3_BUART_sTX_TxSts__STATUS_REG CYREG_B1_UDB06_ST

/* UART_3_IntClock */
#define UART_3_IntClock__CFG0 CYREG_CLKDIST_DCFG3_CFG0
#define UART_3_IntClock__CFG1 CYREG_CLKDIST_DCFG3_CFG1
#define UART_3_IntClock__CFG2 CYREG_CLKDIST_DCFG3_CFG2
#define UART_3_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_3_IntClock__INDEX 0x03u
#define UART_3_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_3_IntClock__PM_ACT_MSK 0x08u
#define UART_3_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_3_IntClock__PM_STBY_MSK 0x08u

/* UART_3_TXInternalInterrupt */
#define UART_3_TXInternalInterrupt__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define UART_3_TXInternalInterrupt__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define UART_3_TXInternalInterrupt__INTC_MASK 0x10u
#define UART_3_TXInternalInterrupt__INTC_NUMBER 4u
#define UART_3_TXInternalInterrupt__INTC_PRIOR_NUM 7u
#define UART_3_TXInternalInterrupt__INTC_PRIOR_REG CYREG_NVIC_PRI_4
#define UART_3_TXInternalInterrupt__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define UART_3_TXInternalInterrupt__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* UART_6_BUART */
#define UART_6_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB04_05_ACTL
#define UART_6_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB04_05_CTL
#define UART_6_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB04_05_CTL
#define UART_6_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB04_05_CTL
#define UART_6_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B1_UDB04_05_CTL
#define UART_6_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B1_UDB04_05_MSK
#define UART_6_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B1_UDB04_05_MSK
#define UART_6_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B1_UDB04_05_MSK
#define UART_6_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB04_05_MSK
#define UART_6_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B1_UDB04_ACTL
#define UART_6_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B1_UDB04_CTL
#define UART_6_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B1_UDB04_ST_CTL
#define UART_6_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B1_UDB04_CTL
#define UART_6_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B1_UDB04_ST_CTL
#define UART_6_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define UART_6_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define UART_6_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B1_UDB04_MSK
#define UART_6_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB04_05_ACTL
#define UART_6_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B1_UDB04_05_ST
#define UART_6_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B1_UDB04_MSK
#define UART_6_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define UART_6_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define UART_6_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B1_UDB04_ACTL
#define UART_6_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B1_UDB04_ST_CTL
#define UART_6_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B1_UDB04_ST_CTL
#define UART_6_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B1_UDB04_ST
#define UART_6_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B0_UDB07_08_A0
#define UART_6_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B0_UDB07_08_A1
#define UART_6_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B0_UDB07_08_D0
#define UART_6_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B0_UDB07_08_D1
#define UART_6_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define UART_6_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B0_UDB07_08_F0
#define UART_6_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B0_UDB07_08_F1
#define UART_6_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B0_UDB07_A0_A1
#define UART_6_BUART_sRX_RxShifter_u0__A0_REG CYREG_B0_UDB07_A0
#define UART_6_BUART_sRX_RxShifter_u0__A1_REG CYREG_B0_UDB07_A1
#define UART_6_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B0_UDB07_D0_D1
#define UART_6_BUART_sRX_RxShifter_u0__D0_REG CYREG_B0_UDB07_D0
#define UART_6_BUART_sRX_RxShifter_u0__D1_REG CYREG_B0_UDB07_D1
#define UART_6_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define UART_6_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B0_UDB07_F0_F1
#define UART_6_BUART_sRX_RxShifter_u0__F0_REG CYREG_B0_UDB07_F0
#define UART_6_BUART_sRX_RxShifter_u0__F1_REG CYREG_B0_UDB07_F1
#define UART_6_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define UART_6_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B0_UDB07_08_ST
#define UART_6_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_6_BUART_sRX_RxSts__3__POS 3
#define UART_6_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_6_BUART_sRX_RxSts__4__POS 4
#define UART_6_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_6_BUART_sRX_RxSts__5__POS 5
#define UART_6_BUART_sRX_RxSts__MASK 0x38u
#define UART_6_BUART_sRX_RxSts__MASK_REG CYREG_B0_UDB07_MSK
#define UART_6_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define UART_6_BUART_sRX_RxSts__STATUS_REG CYREG_B0_UDB07_ST

/* UART_6_IntClock */
#define UART_6_IntClock__CFG0 CYREG_CLKDIST_DCFG5_CFG0
#define UART_6_IntClock__CFG1 CYREG_CLKDIST_DCFG5_CFG1
#define UART_6_IntClock__CFG2 CYREG_CLKDIST_DCFG5_CFG2
#define UART_6_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_6_IntClock__INDEX 0x05u
#define UART_6_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_6_IntClock__PM_ACT_MSK 0x20u
#define UART_6_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_6_IntClock__PM_STBY_MSK 0x20u

/* UART_6_RXInternalInterrupt */
#define UART_6_RXInternalInterrupt__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define UART_6_RXInternalInterrupt__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define UART_6_RXInternalInterrupt__INTC_MASK 0x20u
#define UART_6_RXInternalInterrupt__INTC_NUMBER 5u
#define UART_6_RXInternalInterrupt__INTC_PRIOR_NUM 7u
#define UART_6_RXInternalInterrupt__INTC_PRIOR_REG CYREG_NVIC_PRI_5
#define UART_6_RXInternalInterrupt__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define UART_6_RXInternalInterrupt__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Pin_Vin */
#define Pin_Vin__0__INTTYPE CYREG_PICU4_INTTYPE1
#define Pin_Vin__0__MASK 0x02u
#define Pin_Vin__0__PC CYREG_PRT4_PC1
#define Pin_Vin__0__PORT 4u
#define Pin_Vin__0__SHIFT 1
#define Pin_Vin__AG CYREG_PRT4_AG
#define Pin_Vin__AMUX CYREG_PRT4_AMUX
#define Pin_Vin__BIE CYREG_PRT4_BIE
#define Pin_Vin__BIT_MASK CYREG_PRT4_BIT_MASK
#define Pin_Vin__BYP CYREG_PRT4_BYP
#define Pin_Vin__CTL CYREG_PRT4_CTL
#define Pin_Vin__DM0 CYREG_PRT4_DM0
#define Pin_Vin__DM1 CYREG_PRT4_DM1
#define Pin_Vin__DM2 CYREG_PRT4_DM2
#define Pin_Vin__DR CYREG_PRT4_DR
#define Pin_Vin__INP_DIS CYREG_PRT4_INP_DIS
#define Pin_Vin__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define Pin_Vin__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define Pin_Vin__LCD_EN CYREG_PRT4_LCD_EN
#define Pin_Vin__MASK 0x02u
#define Pin_Vin__PORT 4u
#define Pin_Vin__PRT CYREG_PRT4_PRT
#define Pin_Vin__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define Pin_Vin__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define Pin_Vin__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define Pin_Vin__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define Pin_Vin__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define Pin_Vin__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define Pin_Vin__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define Pin_Vin__PS CYREG_PRT4_PS
#define Pin_Vin__SHIFT 1
#define Pin_Vin__SLW CYREG_PRT4_SLW

/* Pin_Vin_1 */
#define Pin_Vin_1__0__INTTYPE CYREG_PICU4_INTTYPE0
#define Pin_Vin_1__0__MASK 0x01u
#define Pin_Vin_1__0__PC CYREG_PRT4_PC0
#define Pin_Vin_1__0__PORT 4u
#define Pin_Vin_1__0__SHIFT 0
#define Pin_Vin_1__AG CYREG_PRT4_AG
#define Pin_Vin_1__AMUX CYREG_PRT4_AMUX
#define Pin_Vin_1__BIE CYREG_PRT4_BIE
#define Pin_Vin_1__BIT_MASK CYREG_PRT4_BIT_MASK
#define Pin_Vin_1__BYP CYREG_PRT4_BYP
#define Pin_Vin_1__CTL CYREG_PRT4_CTL
#define Pin_Vin_1__DM0 CYREG_PRT4_DM0
#define Pin_Vin_1__DM1 CYREG_PRT4_DM1
#define Pin_Vin_1__DM2 CYREG_PRT4_DM2
#define Pin_Vin_1__DR CYREG_PRT4_DR
#define Pin_Vin_1__INP_DIS CYREG_PRT4_INP_DIS
#define Pin_Vin_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define Pin_Vin_1__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define Pin_Vin_1__LCD_EN CYREG_PRT4_LCD_EN
#define Pin_Vin_1__MASK 0x01u
#define Pin_Vin_1__PORT 4u
#define Pin_Vin_1__PRT CYREG_PRT4_PRT
#define Pin_Vin_1__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define Pin_Vin_1__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define Pin_Vin_1__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define Pin_Vin_1__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define Pin_Vin_1__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define Pin_Vin_1__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define Pin_Vin_1__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define Pin_Vin_1__PS CYREG_PRT4_PS
#define Pin_Vin_1__SHIFT 0
#define Pin_Vin_1__SLW CYREG_PRT4_SLW

/* ADC_SAR_L_ADC_SAR */
#define ADC_SAR_L_ADC_SAR__CLK CYREG_SAR0_CLK
#define ADC_SAR_L_ADC_SAR__CSR0 CYREG_SAR0_CSR0
#define ADC_SAR_L_ADC_SAR__CSR1 CYREG_SAR0_CSR1
#define ADC_SAR_L_ADC_SAR__CSR2 CYREG_SAR0_CSR2
#define ADC_SAR_L_ADC_SAR__CSR3 CYREG_SAR0_CSR3
#define ADC_SAR_L_ADC_SAR__CSR4 CYREG_SAR0_CSR4
#define ADC_SAR_L_ADC_SAR__CSR5 CYREG_SAR0_CSR5
#define ADC_SAR_L_ADC_SAR__CSR6 CYREG_SAR0_CSR6
#define ADC_SAR_L_ADC_SAR__PM_ACT_CFG CYREG_PM_ACT_CFG11
#define ADC_SAR_L_ADC_SAR__PM_ACT_MSK 0x01u
#define ADC_SAR_L_ADC_SAR__PM_STBY_CFG CYREG_PM_STBY_CFG11
#define ADC_SAR_L_ADC_SAR__PM_STBY_MSK 0x01u
#define ADC_SAR_L_ADC_SAR__SW0 CYREG_SAR0_SW0
#define ADC_SAR_L_ADC_SAR__SW2 CYREG_SAR0_SW2
#define ADC_SAR_L_ADC_SAR__SW3 CYREG_SAR0_SW3
#define ADC_SAR_L_ADC_SAR__SW4 CYREG_SAR0_SW4
#define ADC_SAR_L_ADC_SAR__SW6 CYREG_SAR0_SW6
#define ADC_SAR_L_ADC_SAR__TR0 CYREG_SAR0_TR0
#define ADC_SAR_L_ADC_SAR__WRK0 CYREG_SAR0_WRK0
#define ADC_SAR_L_ADC_SAR__WRK1 CYREG_SAR0_WRK1

/* ADC_SAR_L_Bypass */
#define ADC_SAR_L_Bypass__0__INTTYPE CYREG_PICU0_INTTYPE4
#define ADC_SAR_L_Bypass__0__MASK 0x10u
#define ADC_SAR_L_Bypass__0__PC CYREG_PRT0_PC4
#define ADC_SAR_L_Bypass__0__PORT 0u
#define ADC_SAR_L_Bypass__0__SHIFT 4
#define ADC_SAR_L_Bypass__AG CYREG_PRT0_AG
#define ADC_SAR_L_Bypass__AMUX CYREG_PRT0_AMUX
#define ADC_SAR_L_Bypass__BIE CYREG_PRT0_BIE
#define ADC_SAR_L_Bypass__BIT_MASK CYREG_PRT0_BIT_MASK
#define ADC_SAR_L_Bypass__BYP CYREG_PRT0_BYP
#define ADC_SAR_L_Bypass__CTL CYREG_PRT0_CTL
#define ADC_SAR_L_Bypass__DM0 CYREG_PRT0_DM0
#define ADC_SAR_L_Bypass__DM1 CYREG_PRT0_DM1
#define ADC_SAR_L_Bypass__DM2 CYREG_PRT0_DM2
#define ADC_SAR_L_Bypass__DR CYREG_PRT0_DR
#define ADC_SAR_L_Bypass__INP_DIS CYREG_PRT0_INP_DIS
#define ADC_SAR_L_Bypass__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define ADC_SAR_L_Bypass__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define ADC_SAR_L_Bypass__LCD_EN CYREG_PRT0_LCD_EN
#define ADC_SAR_L_Bypass__MASK 0x10u
#define ADC_SAR_L_Bypass__PORT 0u
#define ADC_SAR_L_Bypass__PRT CYREG_PRT0_PRT
#define ADC_SAR_L_Bypass__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define ADC_SAR_L_Bypass__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define ADC_SAR_L_Bypass__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define ADC_SAR_L_Bypass__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define ADC_SAR_L_Bypass__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define ADC_SAR_L_Bypass__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define ADC_SAR_L_Bypass__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define ADC_SAR_L_Bypass__PS CYREG_PRT0_PS
#define ADC_SAR_L_Bypass__SHIFT 4
#define ADC_SAR_L_Bypass__SLW CYREG_PRT0_SLW

/* ADC_SAR_L_IRQ */
#define ADC_SAR_L_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_SAR_L_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_SAR_L_IRQ__INTC_MASK 0x01u
#define ADC_SAR_L_IRQ__INTC_NUMBER 0u
#define ADC_SAR_L_IRQ__INTC_PRIOR_NUM 7u
#define ADC_SAR_L_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define ADC_SAR_L_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_SAR_L_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ADC_SAR_L_theACLK */
#define ADC_SAR_L_theACLK__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define ADC_SAR_L_theACLK__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define ADC_SAR_L_theACLK__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define ADC_SAR_L_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_SAR_L_theACLK__INDEX 0x00u
#define ADC_SAR_L_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_SAR_L_theACLK__PM_ACT_MSK 0x01u
#define ADC_SAR_L_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_SAR_L_theACLK__PM_STBY_MSK 0x01u

/* ADC_SAR_R_ADC_SAR */
#define ADC_SAR_R_ADC_SAR__CLK CYREG_SAR1_CLK
#define ADC_SAR_R_ADC_SAR__CSR0 CYREG_SAR1_CSR0
#define ADC_SAR_R_ADC_SAR__CSR1 CYREG_SAR1_CSR1
#define ADC_SAR_R_ADC_SAR__CSR2 CYREG_SAR1_CSR2
#define ADC_SAR_R_ADC_SAR__CSR3 CYREG_SAR1_CSR3
#define ADC_SAR_R_ADC_SAR__CSR4 CYREG_SAR1_CSR4
#define ADC_SAR_R_ADC_SAR__CSR5 CYREG_SAR1_CSR5
#define ADC_SAR_R_ADC_SAR__CSR6 CYREG_SAR1_CSR6
#define ADC_SAR_R_ADC_SAR__PM_ACT_CFG CYREG_PM_ACT_CFG11
#define ADC_SAR_R_ADC_SAR__PM_ACT_MSK 0x02u
#define ADC_SAR_R_ADC_SAR__PM_STBY_CFG CYREG_PM_STBY_CFG11
#define ADC_SAR_R_ADC_SAR__PM_STBY_MSK 0x02u
#define ADC_SAR_R_ADC_SAR__SW0 CYREG_SAR1_SW0
#define ADC_SAR_R_ADC_SAR__SW2 CYREG_SAR1_SW2
#define ADC_SAR_R_ADC_SAR__SW3 CYREG_SAR1_SW3
#define ADC_SAR_R_ADC_SAR__SW4 CYREG_SAR1_SW4
#define ADC_SAR_R_ADC_SAR__SW6 CYREG_SAR1_SW6
#define ADC_SAR_R_ADC_SAR__TR0 CYREG_SAR1_TR0
#define ADC_SAR_R_ADC_SAR__WRK0 CYREG_SAR1_WRK0
#define ADC_SAR_R_ADC_SAR__WRK1 CYREG_SAR1_WRK1

/* ADC_SAR_R_IRQ */
#define ADC_SAR_R_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_SAR_R_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_SAR_R_IRQ__INTC_MASK 0x02u
#define ADC_SAR_R_IRQ__INTC_NUMBER 1u
#define ADC_SAR_R_IRQ__INTC_PRIOR_NUM 7u
#define ADC_SAR_R_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define ADC_SAR_R_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_SAR_R_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ADC_SAR_R_theACLK */
#define ADC_SAR_R_theACLK__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define ADC_SAR_R_theACLK__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define ADC_SAR_R_theACLK__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define ADC_SAR_R_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_SAR_R_theACLK__INDEX 0x01u
#define ADC_SAR_R_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_SAR_R_theACLK__PM_ACT_MSK 0x02u
#define ADC_SAR_R_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_SAR_R_theACLK__PM_STBY_MSK 0x02u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 53000000U
#define BCLK__BUS_CLK__KHZ 53000U
#define BCLK__BUS_CLK__MHZ 53U
#define CY_PROJECT_NAME "972057"
#define CY_VERSION "PSoC Creator  3.3 SP1"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 18u
#define CYDEV_CHIP_DIE_PSOC4A 10u
#define CYDEV_CHIP_DIE_PSOC5LP 17u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 10u
#define CYDEV_CHIP_MEMBER_4C 15u
#define CYDEV_CHIP_MEMBER_4D 6u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 11u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 9u
#define CYDEV_CHIP_MEMBER_4I 14u
#define CYDEV_CHIP_MEMBER_4J 7u
#define CYDEV_CHIP_MEMBER_4K 8u
#define CYDEV_CHIP_MEMBER_4L 13u
#define CYDEV_CHIP_MEMBER_4M 12u
#define CYDEV_CHIP_MEMBER_4N 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 17u
#define CYDEV_CHIP_MEMBER_5B 16u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 0
#define CYDEV_CONFIGURATION_DMA 1
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_DMA
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x200
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x0000003Fu
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */