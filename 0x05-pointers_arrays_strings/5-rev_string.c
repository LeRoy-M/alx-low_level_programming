#include <string.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: String Array Arguement passed into function
 *
 * Return: void
 */

void rev_string(char *s)
{
	int slen;
	int c;

	slen = strlen(s);
	c = slen - 1;

	while (c >= 0)
	{
		_putchar(s[c]);
		--c;
	}
	_putchar('\n');
}
