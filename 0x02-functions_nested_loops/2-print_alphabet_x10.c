#include "main.h"

/**
 *print_alphabet_x10 - Making alphabet appear 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char c;
	int m = 0;

	while (m <= 9)

	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar (c);
		}

	_putchar ('\n');

	m++;
	}
}
