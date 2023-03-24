/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

// ARMv7 on Cortex-M4 instruction to read
// data from the CONTROL register(special register)
// Destination - 'C' variable "control_reg" (OUTPUT Operand)
// MOV instruction cannot be used as the CONTROL register
// is a special register. Hence, use MRS or MSR
// MRS - Move from special register to register
// MSR - Move from register to special register

#include <stdint.h>



int main(void)
{

	int val = 100;
	int control_reg;
	__asm volatile("MOV R0,%0": :"r"(val));
	__asm volatile("MRS %0,CONTROL": "=r"(control_reg));
    /* Loop forever */

	// Example using MOV operation
	// source - a 'C' variable 'var1'
	// Dest - a 'C' variable 'var2'
	// =r for writing
	// r for reading
	int var1 = 10, var2;
	__asm("MOV %0,%1": "=r"(var2): "r"(var1));

	// copy contents of a pointer into another variable
	int p1, *p2;
	// p1 destination; p2 = source
	p2 = (int*)0x20000008;
	__asm volatile("LDR %0,[%1]": "=r"(p1): "r"(p2)); //p1 = *p2(deref the pointer


	for(;;);
}
