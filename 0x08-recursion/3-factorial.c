#include "main.h"

/**
  * factorial - Factorial of a given number.
  * @n: Being an integer
  * Return: an integer
  */

int factorial(int n)
{
	if (n != '\0')
		return (n * factorial(n + 1));
	return (0);
}
