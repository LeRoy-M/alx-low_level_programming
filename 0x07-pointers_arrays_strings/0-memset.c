#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 *
 * @s: Receives array as input from function
 * @b: Receives '0x01' as input from function
 * @n: Receives integer as input from function
 *
 * Return: *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	i = 0;

	do
	{	
		*(s+i) = b;
		i++;
	} while (i < n);

	return ((char *)(s+i));
}
