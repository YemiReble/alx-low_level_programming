#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/

int main(void)
{
	int m;

	for (m = 48; m <= 57; m++)
	{
		putchar (m);
	if (m != 57)
	{
		putchar (',');
		putchar (' ');
	}
	}
	putchar ('\n');

	return (0);
}
