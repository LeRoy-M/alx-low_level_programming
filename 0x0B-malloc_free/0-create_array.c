#include "main.h"

/**
 * create_array - Creates an array of chars, init with a specific char
 *
 * @size: Parameter passed into function
 * @c: Parameter passed into function
 *
 * Return: 'NULL' if size = 0 OR pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	i = 0;

	ar = (char *) malloc(size * sizeof(c));

	if (size == 0)
	{
		return ('\0');
	}

	do
	{
		*(ar + i) = c;
		i++;
	} while (i < size);

	return (ar);
}
