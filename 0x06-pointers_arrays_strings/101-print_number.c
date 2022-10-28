#include "main.h"

/**
  * print_number - print all
  * @n: integer
  * Return: void
  */

void print_number(int n)
{
	unsigned int m, l, y;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	l = m;
	y = 1;

	while (l > 9)
	{
		b /= 10;
		y *= 10;
	}

	for (; y >= 1; y /= 10)
	{
		_putchar(((m / y) % 10) + 48);
	}
}
