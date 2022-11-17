#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * op_functions - program that performs simple operations.
  *
  * op_add - For Addition
  * op_sub - For Subtraction
  * op_mul - For Multiplication
  * op_div - For Division
  * op_mod - For Modulus (Remainder)
  * @a: First Integer
  * @b: Second Integer
  *
  * Return: Always Success
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - For Subtractions
  * @a: First Integer
  * @b: Second Integer
  * Retrun: Always Success
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - For Multiplication
 * @a: First Integer
 * @b: Second Intege
 * Retrun: Always Success
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - For Division
  * @a: First Integer
  * @b: Second Integer
  * Retrun: Always Success
  */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	
	printf("Error\n");
	exit(100);
}

/**
  * op_mod - For Modul
  * @a: First Integer
  * @b: Second Integer
  * Retrun: Always Success
  */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	
	printf("Error\n");
	exit(100);
}
