#include "search_algos.h"

/**
 * binary_search - Function that uses a binary search algorithm to search for
 * a value in a sorted integer array
 *
 * @array: Pointer to first element in array
 * @size: Number of elements in the array
 * @value: Integer to search for in array
 *
 * Return: Always INTEGER
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, mid, i;
	int index = -1;

	if (array == NULL)
		return (index);

	low = 0;

	do {
		mid = (low + (size - low) / 2);

		printf("Searching in array: ");
		for (i = low; i < size; i++)
		{
			if (i == (size - 1))
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
		{
			size = mid;
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
	} while (low < size);

	return (index);
}
