#include "main.h"

/**
  * binary_to_uint - function that converts a
  * binary number to an unsigned int
  * @b: the binary to convert or print.
  *
  * Return:	the converted number, or 0 if there is one or
  *		more chars in the string b that is not 0 or 1
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int var = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		var <<= 1;
		if (b[i] == '1')
			var += 1;
	}
	return (var);
}
