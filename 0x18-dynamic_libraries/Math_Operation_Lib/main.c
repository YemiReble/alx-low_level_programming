#include <stdio.h>
#include "opps.h"

/**
  * main - Testing the functions that I just created.
  *
  * Return: Always Success.
  */

int main(void)
{
	int num1 = 400;
	int num2 = 200;
	//int divide;
	int sum, multi, subtract, remainder, divide;

	sum = add(num1, num2);
	printf("%d\n", sum);
	
	multi = mul(num1, num2);
	printf("%d\n", multi);
	
	divide = div(num1, num2);
	printf("%d\n", divide);
	
	remainder = mod(num1, num2);
	printf("%d\n", remainder);

	subtract = sub(num1, num2);
	printf("%d\n", subtract);
	
	return (0);
}
