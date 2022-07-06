#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Executes a function given as a parameter
 *
 * @array: Input received during function call
 * @size: Array size
 * @cmp: Function Pointer
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || *cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
