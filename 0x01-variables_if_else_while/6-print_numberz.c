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
	char m;
	m = 0;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
	}
	putchar('\n');

	return (0);
}
