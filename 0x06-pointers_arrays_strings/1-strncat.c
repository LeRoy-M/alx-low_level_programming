#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings
 *
 * @dest: Takes 's1' as input
 * @src: Takes 's2' as input
 * @n: Takes integer as input
 *
 * Return: Pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = strncat(dest, src, n);

	return ((char *) ptr);

}
