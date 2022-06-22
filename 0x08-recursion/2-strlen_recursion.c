#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: Pointer to the input string array passed to function
 *
 * Return: Always int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{	
		_strlen_recursion(s + 1);
		return (1 + _strlen_recursion(s+1));
	}
}
