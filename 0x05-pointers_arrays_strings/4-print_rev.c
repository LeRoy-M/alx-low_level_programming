#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 *
 * @s: String Arguement passed into function
 *
 * Return: void
 */

void print_rev(char *s)
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
