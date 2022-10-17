#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/

/*int main(void)
{
	int l, e;
	int de1 = 0;
	int de2 = 0;

	l = 48;
	while (l < 58)
	{
	e = l + 1;
	while (e < 58)
	{
		putchar (de1);
		putchar (de2);
		putchar (l);
		putchar (e);
		e++;
		de1 = ',';
		de2 = ' ';
	}
		l++;
	}
	putchar (10);

	return (0);
}*/

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
