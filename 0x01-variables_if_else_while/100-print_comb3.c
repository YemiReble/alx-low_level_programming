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
	int l, e;
	int de1 = 0;
	int de2 = 0;

	l = 48;
	while (l < 58)
	{
	e = l + 0;
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
}
