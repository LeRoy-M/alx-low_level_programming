#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *
 * @str: Receives input from function
 *
 * Return:  * OR NULL
 */

char *_strdup(char *str)
{
	char *star;
	int len, i;

	len = 1;
	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	do {
		len++;
	} while (str[len] != '\0');

	star = malloc((len + 1) * sizeof(char));

	if (star == NULL)
	{
		return (NULL);
	}

	do {
		*(star + i) = str[i];
		i++;
	} while (str[i] != '\0');

	return (star);
}
