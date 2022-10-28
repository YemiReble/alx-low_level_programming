#include "main.h"

/**
  * reverse_array - a function that reverses the content
  * of an array of integers
  * @a: being the pointer of an integer
  * @n: a integer
  * Return: void or nothing
  */

void reverse_array(int *a, int n)
{
	int m, l, y;

	for (m = 0; m < n - 1; m++)
	{
		for (l = m + 1; l > 0; l--)
		{
			y = *(a + l);

			*(a + l) = *(a + (l - 1));
			*(a + (l - 1)) = y;
		}
	}
}
