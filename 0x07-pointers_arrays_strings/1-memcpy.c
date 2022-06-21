#include "main.h"

/**
 * _memcpy - Fills memory with a constant byte
 *
 * @dest: Receives array as input from function
 * @src: Receives array as input from function
 * @n: Receives integer as input from function
 *
 * Return: *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

	do
	{	
		*(dest+i) = src[i];
		i++;
	} while (i < n);
	
	return ((char *)(dest+i));
}
