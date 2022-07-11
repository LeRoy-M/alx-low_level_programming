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
	int p;
	int n;

	p = n % 10;
	n = (n * -1) % 10;

	if (n < 0)
	{
		_putchar('0' + n_last);
		return (n_last);
	}
	else
	{
		_putchar('0' + p_last);
		return (p_last);
	}
}
