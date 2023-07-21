#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: Number param passed to function
 *
 * Return: Square Root
 */
int _sqrt_recursion(int n)
{
	int div;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n % 2 != 0)
	{
		return (n / 5);
	}

	else
	{
		div = _sqrt_recursion(n / 2);
		return (n / (div + div));
	}
}
