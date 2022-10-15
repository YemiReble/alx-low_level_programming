#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/*printf("Enter a number: ");*/
	scanf("%d", &n);
	if (n <= 0.0)
	{
	if (n == 0.0)
		printf("%d is zero\n", 0);
	else
		printf("%d is negative\n", -98);
	}
	else
		printf("%d is positive\n", 98);
	return (0);
}
