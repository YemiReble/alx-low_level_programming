#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
*
* Result Always 0 (Success)
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
