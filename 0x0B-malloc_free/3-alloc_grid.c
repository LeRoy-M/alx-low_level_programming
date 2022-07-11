#include "main.h"

char strlen_NULL(char *str, int strlen);

/**
 * **alloc_grid - Returns a pointer to a 2 dimensional array of integers
 *
 * @s1: Receives input from function
 * @s2: Receives input from function
 *
 * Return: * OR NULL
 */

int **alloc_grid(int width, int height)
{
	char *catstr;
	int s1len, s2len, i, j, totlen;

	s1len = s2len = 1;
	i = j = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	s1len = strlen_NULL(s1, s1len);
	s2len = strlen_NULL(s2, s2len);

	totlen = s1len + s2len;
	catstr = (char *) malloc((totlen + 1) * sizeof(char));

	if (catstr == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		do {
			*(catstr + i) = s1[i];
			i++;
		} while (i < s1len);
	}
	if (s2 != NULL)
	{
		do {
			*(catstr + i) = s2[j];
			i++, j++;
		} while (j < s2len);
	}

	return (catstr);
}

/**
 * strlen_NULL - Checks string length
 *
 * @str:Receives character array input
 * @strlen: Receives integer input
 *
 * Return: NULL
 */

char strlen_NULL(char *str, int strlen)
{
	if (str != NULL)
	{
		do {
			strlen++;
		} while (str[strlen] != '\0');

		return (strlen);
	}
	else
	{
		return ('\0');
	}
}
