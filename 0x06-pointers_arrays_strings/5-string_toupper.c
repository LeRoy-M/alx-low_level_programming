#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters
 * to uppercase
 *
 * @s: String to be converted to uppercase
 *
 * Return: Always CHAR POINTER
 */

char *string_toupper(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if (s[n] >= 97 && s[n] <= 122)
		{
			s[n] = s[n] - 32;
		}
		n++;
	}

	return (s);
}
