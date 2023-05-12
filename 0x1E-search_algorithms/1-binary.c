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

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid, x;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (x = low; x <= high; x++)
		{
			printf("%i%s", array[x], x == high ? "\n" : ", ");
		}
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
