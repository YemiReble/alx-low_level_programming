#include "variadic_functions.h"

/**
  * print_strings - function that prints strings
  * @n: variable of some constant numbers
  * @separator: pointer to the characters to print
  *
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *txt;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		txt = va_arg(ap, char*);
		if (txt)
			printf("%s", txt);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
