#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	strand (time(0));
	n = rand() RAND_MAX / 2;
	printf("Input a number :");
	scanf("%d", &n);
	
	if (n >= 0)
	
		printf("%d is a positive number \n", n);
	else
		printf("%d is a negative number \n", n);
}
