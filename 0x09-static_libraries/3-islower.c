#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: Variable name
 * Return: 1 if 'c' is lowercase OR 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
