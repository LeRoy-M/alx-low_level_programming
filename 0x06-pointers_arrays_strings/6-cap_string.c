#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string
 *
 * @s: String to be operated on
 *
 * Return: Always CHAR POINTER
 */

char *cap_string(char *s)
{
	int i, j;
	char sptrs[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			'(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		for (j = 0; j < (*(&sptrs + 1) - sptrs); j++)
		{
			if (s[i - 1] == sptrs[j] && s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}
		i++;
	}

	return (s);
}
