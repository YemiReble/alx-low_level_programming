#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Alway 0 (Success)
*
*/

int main (void) 
{
	int h = '0', t = '1', u = '2';

	while ((h <= '7') || (t <= '8') || (u <= '9')) 
	{
	putchar ("%d%d%d, ", h, t, u);
	u != '9' ? ++u : (t != '8' ? (++t, u = t + 1) : (++h, t = h + 1, u = t + 1));
	}

	return 0;
}
