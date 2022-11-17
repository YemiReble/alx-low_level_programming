#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * op_functions - program that performs simple operations.
  * op_add - For Addition
  * @a: First Integer
  * @b: Second Integer
  *
  * Return: sum
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - For Subtractions
  * @a: First Integer
  * @b: Second Integer
  * Retrun: difference
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - For Multiplication
 * @a: First Integer
 * @b: Second Intege
 * Retrun: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - For Division
  * @a: First Integer
  * @b: Second Integer
  * Retrun: quotient
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
  * Retrun: remainder
  */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	printf("Error\n");
	exit(100);
}
