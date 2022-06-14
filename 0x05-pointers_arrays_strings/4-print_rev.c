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

	slen = strlen(s);

	while (slen > -1)
	{
		_putchar(s[slen]);
		--slen;
	}
	_putchar('\n');
}
