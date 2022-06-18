#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: Passed into print_number
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int pn;

	if (n < 0)
	{
		pn = -n;
		_putchar('-');
	}
	else
	{
		pn = n;
	}
	if (pn / 10)
	{
		print_number(pn / 10);
	}

	_putchar((pn % 10) + '0');
}
