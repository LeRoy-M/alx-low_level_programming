#include "search_algos.h"

/**
 * jump_search - Function that uses a linear search algorithm to search for
 * a value in an integer array
 *
 * @array: Pointer to first element in array
 * @size: Number of elements in the array
 * @value: Integer to search for in array
 *
 * Return: Always INTEGER
 */

int jump_search(int *array, size_t size, int value)
{
	size_t idx, start, end = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[end] <= value && end < size)
	{
		start = end;
		end += sqrt(size);

		if (end > size - 1)
			end = size;
	}

	for (idx = start; idx < end; idx++)
	{
		printf("Value checked array[%lu]: [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
