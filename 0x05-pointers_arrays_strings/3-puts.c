#include "main.h"
#include <stdio.h>

/**
 * _puts - To print the value of *str from main
 * @str: string pointer.
 * @c: Array pointer.
 * Printing with _putchar
 */

void _puts(char *str)
{
	char c;

	for (c = 0; str[c] != '\0'; c++)
	{
		putchar(str[c]);
	}
	putchar ('\n');
}
