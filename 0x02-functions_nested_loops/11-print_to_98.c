#include "main.h"

void less_98(int n);

/**
 * print_to_98 - Prints all natural numbers from 'n' to '98' followed
 * by a new line
 *
 * @n: Input during function call
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	while (n < 98)
	{
		less_98(n);
		n++;
	}

	while (n > 98)
	{
		if (n == 99)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if	(n > 99)
		{
			_putchar((n / 100) + '0');
			_putchar(((n % 100) / 10) + '0');
			_putchar(((n % 100) % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
}

/**
 * less_98 - Prints all natural numbers from 'n' to '98'
 *
 * @n: Input during function call
 *
 * Return: void
 */


void less_98(int n)
{
	int i;

	if (n < -9)
	{
		i = -n;
		_putchar('-');
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(',');
		_putchar(n + ' ');
	}
	else if (n < 0 && n > -10)
	{
		i = -n;
		_putchar('-');
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	else if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
}
