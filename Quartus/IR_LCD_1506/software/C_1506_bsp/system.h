/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2' in SOPC Builder design 'kernel'
 * SOPC Builder design path: ../../kernel.sopcinfo
 *
 * Generated: Wed Aug 30 14:24:15 CST 2017
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x10000820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 100000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1d
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x08000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 100000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INST_ADDR_WIDTH 0x1d
#define ALT_CPU_NAME "nios2_gen2"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x08000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x10000820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 100000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1d
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x08000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INST_ADDR_WIDTH 0x1d
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x08000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_NIOS2_GEN2
#define __IR_1506
#define __LCD__1506
#define __USER_GIO_PWM_1506


/*
 * IR_1506 configuration
 *
 */

#define ALT_MODULE_CLASS_IR_1506 IR_1506
#define IR_1506_BASE 0x10001000
#define IR_1506_IRQ 1
#define IR_1506_IRQ_INTERRUPT_CONTROLLER_ID 1
#define IR_1506_NAME "/dev/IR_1506"
#define IR_1506_SPAN 128
#define IR_1506_TYPE "IR_1506"


/*
 * LCD_1506 configuration
 *
 */

#define ALT_MODULE_CLASS_LCD_1506 LCD__1506
#define LCD_1506_BASE 0x10001080
#define LCD_1506_IRQ -1
#define LCD_1506_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LCD_1506_NAME "/dev/LCD_1506"
#define LCD_1506_SPAN 128
#define LCD_1506_TYPE "LCD__1506"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x100016a8
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x100016a8
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x100016a8
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "kernel"


/*
 * User_GIO_PWM_0 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_0 User_GIO_PWM_1506
#define USER_GIO_PWM_0_BASE 0x10001540
#define USER_GIO_PWM_0_IRQ -1
#define USER_GIO_PWM_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_0_NAME "/dev/User_GIO_PWM_0"
#define USER_GIO_PWM_0_SPAN 64
#define USER_GIO_PWM_0_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_1 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_1 User_GIO_PWM_1506
#define USER_GIO_PWM_1_BASE 0x10001500
#define USER_GIO_PWM_1_IRQ -1
#define USER_GIO_PWM_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_1_NAME "/dev/User_GIO_PWM_1"
#define USER_GIO_PWM_1_SPAN 64
#define USER_GIO_PWM_1_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_10 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_10 User_GIO_PWM_1506
#define USER_GIO_PWM_10_BASE 0x100012c0
#define USER_GIO_PWM_10_IRQ -1
#define USER_GIO_PWM_10_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_10_NAME "/dev/User_GIO_PWM_10"
#define USER_GIO_PWM_10_SPAN 64
#define USER_GIO_PWM_10_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_11 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_11 User_GIO_PWM_1506
#define USER_GIO_PWM_11_BASE 0x10001280
#define USER_GIO_PWM_11_IRQ -1
#define USER_GIO_PWM_11_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_11_NAME "/dev/User_GIO_PWM_11"
#define USER_GIO_PWM_11_SPAN 64
#define USER_GIO_PWM_11_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_12 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_12 User_GIO_PWM_1506
#define USER_GIO_PWM_12_BASE 0x10001240
#define USER_GIO_PWM_12_IRQ -1
#define USER_GIO_PWM_12_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_12_NAME "/dev/User_GIO_PWM_12"
#define USER_GIO_PWM_12_SPAN 64
#define USER_GIO_PWM_12_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_13 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_13 User_GIO_PWM_1506
#define USER_GIO_PWM_13_BASE 0x10001200
#define USER_GIO_PWM_13_IRQ -1
#define USER_GIO_PWM_13_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_13_NAME "/dev/User_GIO_PWM_13"
#define USER_GIO_PWM_13_SPAN 64
#define USER_GIO_PWM_13_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_14 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_14 User_GIO_PWM_1506
#define USER_GIO_PWM_14_BASE 0x100011c0
#define USER_GIO_PWM_14_IRQ -1
#define USER_GIO_PWM_14_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_14_NAME "/dev/User_GIO_PWM_14"
#define USER_GIO_PWM_14_SPAN 64
#define USER_GIO_PWM_14_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_15 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_15 User_GIO_PWM_1506
#define USER_GIO_PWM_15_BASE 0x10001180
#define USER_GIO_PWM_15_IRQ -1
#define USER_GIO_PWM_15_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_15_NAME "/dev/User_GIO_PWM_15"
#define USER_GIO_PWM_15_SPAN 64
#define USER_GIO_PWM_15_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_16 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_16 User_GIO_PWM_1506
#define USER_GIO_PWM_16_BASE 0x10001140
#define USER_GIO_PWM_16_IRQ -1
#define USER_GIO_PWM_16_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_16_NAME "/dev/User_GIO_PWM_16"
#define USER_GIO_PWM_16_SPAN 64
#define USER_GIO_PWM_16_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_17 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_17 User_GIO_PWM_1506
#define USER_GIO_PWM_17_BASE 0x10001100
#define USER_GIO_PWM_17_IRQ -1
#define USER_GIO_PWM_17_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_17_NAME "/dev/User_GIO_PWM_17"
#define USER_GIO_PWM_17_SPAN 64
#define USER_GIO_PWM_17_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_2 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_2 User_GIO_PWM_1506
#define USER_GIO_PWM_2_BASE 0x100014c0
#define USER_GIO_PWM_2_IRQ -1
#define USER_GIO_PWM_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_2_NAME "/dev/User_GIO_PWM_2"
#define USER_GIO_PWM_2_SPAN 64
#define USER_GIO_PWM_2_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_3 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_3 User_GIO_PWM_1506
#define USER_GIO_PWM_3_BASE 0x10001480
#define USER_GIO_PWM_3_IRQ -1
#define USER_GIO_PWM_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_3_NAME "/dev/User_GIO_PWM_3"
#define USER_GIO_PWM_3_SPAN 64
#define USER_GIO_PWM_3_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_4 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_4 User_GIO_PWM_1506
#define USER_GIO_PWM_4_BASE 0x10001440
#define USER_GIO_PWM_4_IRQ -1
#define USER_GIO_PWM_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_4_NAME "/dev/User_GIO_PWM_4"
#define USER_GIO_PWM_4_SPAN 64
#define USER_GIO_PWM_4_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_5 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_5 User_GIO_PWM_1506
#define USER_GIO_PWM_5_BASE 0x10001400
#define USER_GIO_PWM_5_IRQ -1
#define USER_GIO_PWM_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_5_NAME "/dev/User_GIO_PWM_5"
#define USER_GIO_PWM_5_SPAN 64
#define USER_GIO_PWM_5_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_6 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_6 User_GIO_PWM_1506
#define USER_GIO_PWM_6_BASE 0x100013c0
#define USER_GIO_PWM_6_IRQ -1
#define USER_GIO_PWM_6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_6_NAME "/dev/User_GIO_PWM_6"
#define USER_GIO_PWM_6_SPAN 64
#define USER_GIO_PWM_6_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_7 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_7 User_GIO_PWM_1506
#define USER_GIO_PWM_7_BASE 0x10001380
#define USER_GIO_PWM_7_IRQ -1
#define USER_GIO_PWM_7_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_7_NAME "/dev/User_GIO_PWM_7"
#define USER_GIO_PWM_7_SPAN 64
#define USER_GIO_PWM_7_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_8 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_8 User_GIO_PWM_1506
#define USER_GIO_PWM_8_BASE 0x10001340
#define USER_GIO_PWM_8_IRQ -1
#define USER_GIO_PWM_8_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_8_NAME "/dev/User_GIO_PWM_8"
#define USER_GIO_PWM_8_SPAN 64
#define USER_GIO_PWM_8_TYPE "User_GIO_PWM_1506"


/*
 * User_GIO_PWM_9 configuration
 *
 */

#define ALT_MODULE_CLASS_User_GIO_PWM_9 User_GIO_PWM_1506
#define USER_GIO_PWM_9_BASE 0x10001300
#define USER_GIO_PWM_9_IRQ -1
#define USER_GIO_PWM_9_IRQ_INTERRUPT_CONTROLLER_ID -1
#define USER_GIO_PWM_9_NAME "/dev/User_GIO_PWM_9"
#define USER_GIO_PWM_9_SPAN 64
#define USER_GIO_PWM_9_TYPE "User_GIO_PWM_1506"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x100016a8
#define JTAG_UART_IRQ 0
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * new_sdram_controller configuration
 *
 */

#define ALT_MODULE_CLASS_new_sdram_controller altera_avalon_new_sdram_controller
#define NEW_SDRAM_CONTROLLER_BASE 0x8000000
#define NEW_SDRAM_CONTROLLER_CAS_LATENCY 3
#define NEW_SDRAM_CONTROLLER_CONTENTS_INFO
#define NEW_SDRAM_CONTROLLER_INIT_NOP_DELAY 0.0
#define NEW_SDRAM_CONTROLLER_INIT_REFRESH_COMMANDS 2
#define NEW_SDRAM_CONTROLLER_IRQ -1
#define NEW_SDRAM_CONTROLLER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define NEW_SDRAM_CONTROLLER_IS_INITIALIZED 1
#define NEW_SDRAM_CONTROLLER_NAME "/dev/new_sdram_controller"
#define NEW_SDRAM_CONTROLLER_POWERUP_DELAY 100.0
#define NEW_SDRAM_CONTROLLER_REFRESH_PERIOD 15.625
#define NEW_SDRAM_CONTROLLER_REGISTER_DATA_IN 1
#define NEW_SDRAM_CONTROLLER_SDRAM_ADDR_WIDTH 0x19
#define NEW_SDRAM_CONTROLLER_SDRAM_BANK_WIDTH 2
#define NEW_SDRAM_CONTROLLER_SDRAM_COL_WIDTH 10
#define NEW_SDRAM_CONTROLLER_SDRAM_DATA_WIDTH 32
#define NEW_SDRAM_CONTROLLER_SDRAM_NUM_BANKS 4
#define NEW_SDRAM_CONTROLLER_SDRAM_NUM_CHIPSELECTS 1
#define NEW_SDRAM_CONTROLLER_SDRAM_ROW_WIDTH 13
#define NEW_SDRAM_CONTROLLER_SHARED_DATA 0
#define NEW_SDRAM_CONTROLLER_SIM_MODEL_BASE 0
#define NEW_SDRAM_CONTROLLER_SPAN 134217728
#define NEW_SDRAM_CONTROLLER_STARVATION_INDICATOR 0
#define NEW_SDRAM_CONTROLLER_TRISTATE_BRIDGE_SLAVE ""
#define NEW_SDRAM_CONTROLLER_TYPE "altera_avalon_new_sdram_controller"
#define NEW_SDRAM_CONTROLLER_T_AC 5.5
#define NEW_SDRAM_CONTROLLER_T_MRD 3
#define NEW_SDRAM_CONTROLLER_T_RCD 20.0
#define NEW_SDRAM_CONTROLLER_T_RFC 70.0
#define NEW_SDRAM_CONTROLLER_T_RP 20.0
#define NEW_SDRAM_CONTROLLER_T_WR 14.0


/*
 * pio_0 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_0 altera_avalon_pio
#define PIO_0_BASE 0x10001690
#define PIO_0_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_0_CAPTURE 0
#define PIO_0_DATA_WIDTH 1
#define PIO_0_DO_TEST_BENCH_WIRING 0
#define PIO_0_DRIVEN_SIM_VALUE 0
#define PIO_0_EDGE_TYPE "NONE"
#define PIO_0_FREQ 100000000
#define PIO_0_HAS_IN 0
#define PIO_0_HAS_OUT 1
#define PIO_0_HAS_TRI 0
#define PIO_0_IRQ -1
#define PIO_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_0_IRQ_TYPE "NONE"
#define PIO_0_NAME "/dev/pio_0"
#define PIO_0_RESET_VALUE 0
#define PIO_0_SPAN 16
#define PIO_0_TYPE "altera_avalon_pio"


/*
 * pio_1 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_1 altera_avalon_pio
#define PIO_1_BASE 0x10001680
#define PIO_1_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_1_CAPTURE 0
#define PIO_1_DATA_WIDTH 1
#define PIO_1_DO_TEST_BENCH_WIRING 0
#define PIO_1_DRIVEN_SIM_VALUE 0
#define PIO_1_EDGE_TYPE "NONE"
#define PIO_1_FREQ 100000000
#define PIO_1_HAS_IN 0
#define PIO_1_HAS_OUT 1
#define PIO_1_HAS_TRI 0
#define PIO_1_IRQ -1
#define PIO_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_1_IRQ_TYPE "NONE"
#define PIO_1_NAME "/dev/pio_1"
#define PIO_1_RESET_VALUE 0
#define PIO_1_SPAN 16
#define PIO_1_TYPE "altera_avalon_pio"


/*
 * pio_2 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_2 altera_avalon_pio
#define PIO_2_BASE 0x10001670
#define PIO_2_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_2_CAPTURE 0
#define PIO_2_DATA_WIDTH 1
#define PIO_2_DO_TEST_BENCH_WIRING 0
#define PIO_2_DRIVEN_SIM_VALUE 0
#define PIO_2_EDGE_TYPE "NONE"
#define PIO_2_FREQ 100000000
#define PIO_2_HAS_IN 0
#define PIO_2_HAS_OUT 1
#define PIO_2_HAS_TRI 0
#define PIO_2_IRQ -1
#define PIO_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_2_IRQ_TYPE "NONE"
#define PIO_2_NAME "/dev/pio_2"
#define PIO_2_RESET_VALUE 0
#define PIO_2_SPAN 16
#define PIO_2_TYPE "altera_avalon_pio"


/*
 * pio_3 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_3 altera_avalon_pio
#define PIO_3_BASE 0x10001660
#define PIO_3_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_3_CAPTURE 0
#define PIO_3_DATA_WIDTH 1
#define PIO_3_DO_TEST_BENCH_WIRING 0
#define PIO_3_DRIVEN_SIM_VALUE 0
#define PIO_3_EDGE_TYPE "NONE"
#define PIO_3_FREQ 100000000
#define PIO_3_HAS_IN 0
#define PIO_3_HAS_OUT 1
#define PIO_3_HAS_TRI 0
#define PIO_3_IRQ -1
#define PIO_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_3_IRQ_TYPE "NONE"
#define PIO_3_NAME "/dev/pio_3"
#define PIO_3_RESET_VALUE 0
#define PIO_3_SPAN 16
#define PIO_3_TYPE "altera_avalon_pio"


/*
 * pio_4 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_4 altera_avalon_pio
#define PIO_4_BASE 0x10001650
#define PIO_4_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_4_CAPTURE 0
#define PIO_4_DATA_WIDTH 1
#define PIO_4_DO_TEST_BENCH_WIRING 0
#define PIO_4_DRIVEN_SIM_VALUE 0
#define PIO_4_EDGE_TYPE "NONE"
#define PIO_4_FREQ 100000000
#define PIO_4_HAS_IN 0
#define PIO_4_HAS_OUT 1
#define PIO_4_HAS_TRI 0
#define PIO_4_IRQ -1
#define PIO_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_4_IRQ_TYPE "NONE"
#define PIO_4_NAME "/dev/pio_4"
#define PIO_4_RESET_VALUE 0
#define PIO_4_SPAN 16
#define PIO_4_TYPE "altera_avalon_pio"


/*
 * pio_5 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_5 altera_avalon_pio
#define PIO_5_BASE 0x10001640
#define PIO_5_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_5_CAPTURE 0
#define PIO_5_DATA_WIDTH 1
#define PIO_5_DO_TEST_BENCH_WIRING 0
#define PIO_5_DRIVEN_SIM_VALUE 0
#define PIO_5_EDGE_TYPE "NONE"
#define PIO_5_FREQ 100000000
#define PIO_5_HAS_IN 0
#define PIO_5_HAS_OUT 1
#define PIO_5_HAS_TRI 0
#define PIO_5_IRQ -1
#define PIO_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_5_IRQ_TYPE "NONE"
#define PIO_5_NAME "/dev/pio_5"
#define PIO_5_RESET_VALUE 0
#define PIO_5_SPAN 16
#define PIO_5_TYPE "altera_avalon_pio"


/*
 * pio_6 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_6 altera_avalon_pio
#define PIO_6_BASE 0x10001630
#define PIO_6_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_6_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_6_CAPTURE 0
#define PIO_6_DATA_WIDTH 1
#define PIO_6_DO_TEST_BENCH_WIRING 0
#define PIO_6_DRIVEN_SIM_VALUE 0
#define PIO_6_EDGE_TYPE "NONE"
#define PIO_6_FREQ 100000000
#define PIO_6_HAS_IN 0
#define PIO_6_HAS_OUT 1
#define PIO_6_HAS_TRI 0
#define PIO_6_IRQ -1
#define PIO_6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_6_IRQ_TYPE "NONE"
#define PIO_6_NAME "/dev/pio_6"
#define PIO_6_RESET_VALUE 0
#define PIO_6_SPAN 16
#define PIO_6_TYPE "altera_avalon_pio"


/*
 * pio_7 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_7 altera_avalon_pio
#define PIO_7_BASE 0x10001620
#define PIO_7_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_7_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_7_CAPTURE 0
#define PIO_7_DATA_WIDTH 1
#define PIO_7_DO_TEST_BENCH_WIRING 0
#define PIO_7_DRIVEN_SIM_VALUE 0
#define PIO_7_EDGE_TYPE "NONE"
#define PIO_7_FREQ 100000000
#define PIO_7_HAS_IN 0
#define PIO_7_HAS_OUT 1
#define PIO_7_HAS_TRI 0
#define PIO_7_IRQ -1
#define PIO_7_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_7_IRQ_TYPE "NONE"
#define PIO_7_NAME "/dev/pio_7"
#define PIO_7_RESET_VALUE 0
#define PIO_7_SPAN 16
#define PIO_7_TYPE "altera_avalon_pio"


/*
 * sysid_qsys configuration
 *
 */

#define ALT_MODULE_CLASS_sysid_qsys altera_avalon_sysid_qsys
#define SYSID_QSYS_BASE 0x100016a0
#define SYSID_QSYS_ID 2
#define SYSID_QSYS_IRQ -1
#define SYSID_QSYS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_QSYS_NAME "/dev/sysid_qsys"
#define SYSID_QSYS_SPAN 8
#define SYSID_QSYS_TIMESTAMP 1504073683
#define SYSID_QSYS_TYPE "altera_avalon_sysid_qsys"

#endif /* __SYSTEM_H_ */
