#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: Receives input during function call
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, base2;

	for (i = 31; i >= 0; i--)
	{
		base2 = n >> i;

		if (base2 & 1)
			_putchar('1');
		else
			_putchar('0');
	}

	_putchar('\n');
}
