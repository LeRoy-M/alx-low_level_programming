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
	char *ar;
       
	ar = (char *) malloc(size * c);

	if (size == 0)
	{
		return ('\0');
	}

	return (ar);
}
