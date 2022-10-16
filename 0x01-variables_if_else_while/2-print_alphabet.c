#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*
*Main - Entry point
*
*Result Always 0 (Success)
*
*/

int main(void)
{
	int q;

	for (q = 'A'; q <= 'B'; q++);
	{
		int low = tolower(q);
		putchar(low);
	}

	return (0);
}
