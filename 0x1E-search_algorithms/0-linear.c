#include "search_algos.h"

/**
  * binary_search - This function searches for a value in a
  *             sorted array of integers using binary search
  * @array: The pointer to the first element of the array to search in
  * @size: The number of elements in array
  * @value: The value to search for
  *
  * Return: - The index where value is located
  */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
