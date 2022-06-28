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

	if (*str == '\0')
	{
		return (NULL);
	}

	do {
		len++;
	} while (*str != '\0');

	star = malloc(len * sizeof(char));

	if (star == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		*(star + i) = str[i] ;
	}

	return (star);
}
