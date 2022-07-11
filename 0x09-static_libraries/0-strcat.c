#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings
 *
 * @dest: Takes 's1' as inputs
 * @src: Takes 's2' as inputs
 *
 * Return: Pointer
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = strcat(dest, src);

	return ((char *) ptr);

}
