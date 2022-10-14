#include <stdio.h>

int main(void)
{
	char charType;
	int integerType;
	long int longintegerType;
	long long longlongintegerType;
	float floatType;

	printf("Size of char: %ld byte\n", sizeof(charType));
	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of long int: %ld bytes\n", sizeof(longintegerType));
	printf("Size of long long int: %ld bytes\n", sizeof(longlongintegerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));

	return (0);
}
