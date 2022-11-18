#include "variadic_functions.h"

/**
  * print_numbers - function that prints numbers
  * @n: variable of some constant numbers
  * @separator: pointer to the comma char...
  *
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i < n - 1; i++)
		{
			printf("%d", va_arg(ap, int));
			if (separator)
				printf("%s", separator);
		}
		printf("%d", va_arg(ap, int));
		va_end(ap);
	}
	putchar('\n');
}
