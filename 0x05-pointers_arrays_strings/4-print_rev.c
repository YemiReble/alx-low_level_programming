#include <stdio.h>
#include "main.h"

/**
 * print_rev - Writing a function that prints a string in reverse.
 * @s: being the pointer to main
 * Return: viod
 */

void print_rev(char *s)
{
	int m = 0;

	while (s[m] != '\0')
	{
		m++;
	}
	for (m -= 1; m >= 0; m--)
	{
		putchar(s[m]);
	}
	putchar('\n');
}
