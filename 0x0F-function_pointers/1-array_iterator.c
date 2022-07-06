#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 *
 * @array: Input received during function call
 * @size: Array size
 * @action: Function Pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, j;

	j = size;

	if (array != NULL || *action != NULL)
	{
		for (i = 0; i < j; i++)
		{
			(*action)(array[i]);
		}
	}
}
