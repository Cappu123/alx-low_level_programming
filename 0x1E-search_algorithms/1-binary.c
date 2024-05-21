#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index where "value" is located or -1 if not present or array == NULL
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	if (size >= 2) 
	{
		unsigned int k = size / 2;
		int i = 0;

		while (i < k)
		{
			printf("Found %d at index: %d\n", i, array[i]);
			if (array[i] == value)
				return (i);
				break;
		}
		printf("Found %d at index: %d\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

