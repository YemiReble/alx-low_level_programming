#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Description: prints the last digit of a number
 * Return: integer
 */

int print_last_digit(int n)
{
	int last-digit = n % 10;

	if (n < 0)
	{
		last-digit = last-digit * -1;
	}
	_putchar(last-digit + '0');
	return (last-digit);
}
