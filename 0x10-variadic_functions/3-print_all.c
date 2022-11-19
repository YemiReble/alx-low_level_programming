#include "variadic_functions.h"

/**
  * print_all - function that prints anything
  * @format: pointer to the characters to print
  *
  * Return: void
  */

void print_all(const char * const format, ...)
{
	va_list ap;
	int j = 0;
	char *str, *sepa = "";

	va_start(ap, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sepa, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sepa, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sepa, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sepa, str);
					break;
				default:
					j++;

					continue;
			}
			sepa = ", ";
			j++;
		}
	}
	va_end(ap);
	putchar('\n');
}
