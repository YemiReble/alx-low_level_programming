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
	int q;

	for (q = 'a'; q <= 'z'; q++,"\n")
	{
		putchar(q);
		/*putchar(\n');*/
	}

	return (0);
}
