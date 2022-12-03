#include "main.h"

/**
  * print_binary - function that prints the binary representation
  * of a number
  * @n:
  *
  * Return:
  */

void print_binary(unsigned long int n)
{
	unsigned long int rep = n;
	int count = 0;

	while (rep)
	{
		rep = rep >> 1;
		count++;
	}
	if (!count)
		putchar('0');
	while (count)
	{
		rep = n >> --count;
		if (rep & 1)
			putchar('1');
		else
			putchar('0');
	}
}
