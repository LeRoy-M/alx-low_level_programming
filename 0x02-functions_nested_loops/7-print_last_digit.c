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
	int p_last, n_last;

	if (n < 0)
	{
		n_last = (n * -1) % 10;
		_putchar('0' + n_last);
		return (n_last);
	}
	else
	{
		p_last = n % 10;
		_putchar('0' + p_last);
		return (p_last);
	}
}
