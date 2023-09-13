#include "search_algos.h"

int bin_search(int *array, size_t lower, size_t upper, int value);

/**
 * exponential_search - Function that uses an exponential search algorithm
 * to search for a value in a sorted integer array
 *
 * @array: Pointer to first element in array
 * @size: Number of elements in the array
 * @value: Integer to search for in array
 *
 * Return: Always INTEGER
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 1, bound, high;

	if (!array)
		return (-1);
	else if (array[0] == value)
		return (0);

	while (idx < size && array[idx] < value)
	{
		printf("Value checked array[%lu]: [%d]\n", idx, array[idx]);
		idx *= 2;

		if (idx >= size && array[size - 1] < value)
			return (-1);
	}

	high = (idx < size) ? idx : (size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", (idx / 2), high);

	bound = ((idx + 1) < size) ? (idx + 1) : size;

	return (bin_search(array, (idx / 2), bound, value));
}

/**
 * bin_search - Function that uses a binary search algorithm to search for
 * a value in a sorted integer array
 *
 * @array: Pointer to first element in array
 * @lower: Lower bound index of elements in the array to search through
 * @upper: Upper bound index of elements in the array to search through
 * @value: Integer to search for in array
 *
 * Return: Always INTEGER
 */

int bin_search(int *array, size_t lower, size_t upper, int value)
{
	size_t i, mid;
	int index = -1;

	if (!array)
		return (index);

	while (lower < upper)
	{
		mid = (lower + (upper - lower) / 2);

		printf("Searching in array: ");
		for (i = lower; i < upper; i++)
		{
			if (i == (upper - 1))
			{
				printf("%u\n", array[i]);
				break;
			}
			printf("%u, ", array[i]);
		}

		if (array[mid] == value)
		{
			index = mid;
			break;
		}
		else if (array[mid] > value)
			upper = mid;
		else if (array[mid] < value)
			lower = mid + 1;
	}

	return (index);
}
