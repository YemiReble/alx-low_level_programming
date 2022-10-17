#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/

int main(void)
{
	char m = 0;

	while (m < 10)
	{
		putchar(m);
		m = m + 1;
	}
	putchar('\n');

	return (0);
}
