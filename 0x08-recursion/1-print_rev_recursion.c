#include "main.h"

/**
  * print_rev_recursion - Function that prints string in reverse
  * @s: pointer to string
  * Return: nothing
  */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		putchar('\n');
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
