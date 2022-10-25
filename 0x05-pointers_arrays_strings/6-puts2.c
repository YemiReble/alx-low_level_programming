#include "main.h"

/**
 * puts2 -  prints every other character of a string, starting with the first character.
 * @str: being the pointer
 * Return: void
 */

void puts2(char *str)
{
	int m;
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	for (m = 0; m < n; m += 2)
	{
		putchar(str[n]);
	}
	putchar('\n');
}
