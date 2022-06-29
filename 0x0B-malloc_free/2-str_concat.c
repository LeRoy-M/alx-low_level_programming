#include "main.h"

/**
 * *str_concat - Concatenates two strings
 *
 * @s1: Receives input from function
 * @s2: Receives input from function
 *
 * Return: * OR NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *catstr;
	int s1len, s2len, i, j, totlen;

	s1len = s2len = i = j = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s1 != NULL || s2 != NULL)
	{
		do {
			s1len++;
		} while (s1[s1len] != '\0');

		do {
			s2len++;
		} while (s2[s2len] != '\0');
	}

	totlen = s1len + s2len;
	catstr = (char *) malloc((totlen + 1) * sizeof(char));

	if (catstr == NULL)
	{
		return (NULL);
	}

	do {
		*(catstr + i) = s1[i];
		i++;
	} while (i < s1len);

	do {
		*(catstr + i) = s2[j];
		i++, j++;
	} while (j < s2len);

	return (catstr);
}
