#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/

int main(void)
{
	char q = 'a';

	while (q <= 'z')
	{
		putchar(q);
		q++;
	}
		putchar('\n');

	return (0);
}
