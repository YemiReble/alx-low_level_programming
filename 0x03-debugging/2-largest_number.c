#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int main(void)
/*int largest_number(int a, int b, int c)
*/
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;
	
	largest = (a, b, c);
	
	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	printf("%d is the largest number\n", largest);

	return (largest);
}
