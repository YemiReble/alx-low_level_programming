#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return Always 0 (Success)
*
*/

int main(void)
{
	int l;

	for (l = 'a' ; l <= 'd' ; l++)
	{
	if (l != 'e' && l != 'q')
	{
		putchar(l);
	}
	}
	putchar('\n');

	return (0);
}
