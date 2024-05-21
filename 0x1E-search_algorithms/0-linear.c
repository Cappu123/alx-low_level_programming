#include "search_algos.h"

/**
 *  a function that searches for a value in an array of integers 
 *  using the Linear search algorithm
 *  @array: a pointer to the first element of the array to search in
 *  @size: the number of elements in array
 *  @value: the value to search for
 *  @return: the first index where "value" is located
 *  or -1 if value is not present in "array" or if "array" is NULL
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);	
		}
		i++;
	
	}
	return (-1);
}

