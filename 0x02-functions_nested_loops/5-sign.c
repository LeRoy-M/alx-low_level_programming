#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Variable name
 * Return: 1 and print '+' OR 0 and print '0' OR -1 and print '-'
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
