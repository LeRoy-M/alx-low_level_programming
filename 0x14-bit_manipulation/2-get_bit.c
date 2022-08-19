#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 *
 * @n: Receives input during function call
 * @index: Receives input during function call
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n >> 0)
	{
		if (n >> 1)
			get_bit((n >> 1), index);

		if (i == index)
			return (n & 1);
	}
	else
	{
		buffer = 0;
	}

	for (i = 0; i < index; i++)
	{
		buffer++;
	}
	return (*buffer);
}
