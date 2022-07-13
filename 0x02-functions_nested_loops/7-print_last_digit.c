#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: Received during function call
 *
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = -n;
	}

	last = n % 10;

	if (last < 0)
	{
		last = -last;
	}

	_putchar(last + '0');

	return (last);
}
