#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * op_add - add two integers
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
  * op_sub - return the difference of two integer
  * @a: First Integer
  * @b: Second Integer
  *
  * Return: difference
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: First Integer
 * @b: Second Intege
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide
  * @a: First Integer
  * @b: Second Integer
  *
  * Return: quotient
  */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	printf("Error\n");
	exit(100);
}

/**
  * op_mod - Modul
  * @a: First Integer
  * @b: Second Integer
  *
  * Return: remainder
  */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	printf("Error\n");
	exit(100);
}
