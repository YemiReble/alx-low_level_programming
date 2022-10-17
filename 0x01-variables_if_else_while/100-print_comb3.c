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
	int d1, d2, n = 0;
	
	for (d1 = '0'; d1 <= '9'; d1++)
	{
	for (d2 = d1 + 1; d2 <= '9'; d2++, n++)
	{
	if (n > 0)
	{
		putchar(',');
		putchar(' ');
	}
		putchar(d1);
		putchar(d2);
	}
	}
	putchar('\n');
	return (0);
}
