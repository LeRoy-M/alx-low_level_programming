#include "search_algos.h"

/**
 * jump_search - Function that uses a jump search algorithm to search for
 * a value in a sorted integer array
 *
 * @array: Pointer to first element in array
 * @size: Number of elements in the array
 * @value: Integer to search for in array
 *
 * Return: Always INTEGER
 */

int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0, step = 0, jump = sqrt(size);

	if (!array)
		return (-1);

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu]: [%d]\n", step, array[step]);
		step += jump;
	}

	idx = step - jump;
	printf("Value found between indexes [%lu] and [%lu]\n", idx, idx + jump);

	while (idx <= step && idx < size)
	{
		printf("Value checked array[%lu]: [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		idx++;
	}

	return (-1);
}
