#include <stdio.h>

int main(void)
{
	char charType;
	int integerType;
	long int longintegerType;
	long long longlongintegerType;
	float floatType;

	printf("Size of char: %ld byte(s)\n", sizeof(charType));
	printf("Size of int: %ld byte(s)\n", sizeof(integerType));
	printf("Size of long int: %ld byte(s)\n", sizeof(longintegerType));
	printf("Size of long long int: %ld byte(s)\n", sizeof(longlongintegerType));
	printf("Size of float: %ld byte(s)\n", sizeof(floatType));

	return (0);
}
