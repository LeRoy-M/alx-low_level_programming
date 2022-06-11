#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet x10 in l_case, followed by a newline
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int line;
	char lcc;

	for (line = 0; line < 10; line++)
	{
		for (lcc = 'a'; lcc <= 'z'; lcc++)
		{
			_putchar(lcc);
		}
		_putchar('\n');
	}
}
