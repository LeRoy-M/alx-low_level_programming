#include "search_algos.h"

/**
 * interpolation_search - Function that uses an interpolation search algorithm
 * to search for a value in a sorted integer array
 *
 * @array: Pointer to first element in array
 * @size: Number of elements in the array
 * @value: Integer to search for in array
 *
 * Return: Always INTEGER
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t idx = 0, mid, high = size - 1;

	if (!array)
		return (-1);

	while ((array[idx] != array[high]) && (value >= array[idx]) &&
			(value <= array[high]))
	{
		printf("Value checked array[%lu]: [%d]\n", idx, array[idx]);
		mid = idx + ((value - array[idx]) * (high - idx) / (array[high] -
					array[idx]));

		if (array[mid] < value)
			idx = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[idx])
		return (idx);
	else
		return (-1);
}
