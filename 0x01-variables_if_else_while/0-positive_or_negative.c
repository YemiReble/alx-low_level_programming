#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	RAND_MAX / 2;
	/*printf("Input a number :");*/
	scanf("%d", &n);
	if (n > 0)
		write(1, "%d is positive \n", 98);
	else if (n < 0)
		write(1, "%d is negative \n", -98);
	else 
		write(1, "%d is zero \n", 0);
	return (0);
}
