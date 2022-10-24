#include "main.h"
#include <stdio.h>

/**
 * _puts - To print the value of *str from main
 * @str: string pointer.
 */

void _puts(char *str)
{
	int c;

	
	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
