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
	int p_last;
	int n_last;

	p_last = n % 10;
	n_last = (n * -1) % 10;

	if (n >= 0)
	{
		_putchar('0' + p_last);
		return (p_last);
	}
	else if (n < 0)
	{
		_putchar('0' + n_last);
		return (n_last);
	}
}
