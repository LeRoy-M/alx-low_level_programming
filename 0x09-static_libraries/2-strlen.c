#include <string.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: Local Pointer
 *
 * Return: int
 */

int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen] != '\0')
	{
		strlen++;
	}

	return (strlen);
}
