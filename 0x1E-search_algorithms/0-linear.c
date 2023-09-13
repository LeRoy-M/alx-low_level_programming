#include "search_algos.h"

/**
 * linear_search - Function that uses a linear search algorithm to search for
 * a value in an integer array
 *
 * @array: Pointer to first element in array
 * @size: Number of elements in the array
 * @value: Integer to search for in array
 *
 * Return: Always INTEGER
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu]: [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
