#include "main.h"

/**
 * puts2 -  prints every other character of a string.
 * @str: being the string pointer
 * Return: void
 */

void puts2(char *str)
{
	int n = 0, m = 0;

	while (*(str + n) != '\0')
	{
		++n;
	}

	while (m < n)
	{
		putchar(*(str + m));
		m ++ 2;
	}
	putchar('\n');
}
