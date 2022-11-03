#include "main.h"

/**
  * factorial - Factorial of a given number.
  * @n: Being an integer
  * Return: an integer
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 1)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
