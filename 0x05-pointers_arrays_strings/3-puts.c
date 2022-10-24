#include "main.h"
#include <stdio.h>

/**
  * _puts - To print the value of *str from main
  */

void _puts(char *str)
{
	char c;

	c = 0;
	while (*(str + c) != '\0')
	{
		_putchar(*str);
		(str)++;
	}
	_putchar('\n');
}
