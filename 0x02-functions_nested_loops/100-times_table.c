#include "main.h"

void tables_conditional(int, int, int);

/**
 * print_times_table - Prints the 'n' times table, starting from 0
 *
 * @n: Input variable
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, tt;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			tt = i * j;
			tables_conditional(n, j, tt);
		}
		_putchar('\n');
	}
}

/**
 * tables_conditional - Performs checks on 'n' and times table, starting from 0
 *
 * @n: Input variable
 * @j: Variable in times expression
 * @tt: Value of times expression
 *
 * Return: void
 */

void tables_conditional(int n, int j, int tt)
{
	if (j == 0)
	{
		_putchar(tt + '0');
	}
	else if (tt > 9 && tt < 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((tt / 10) + '0');
		_putchar((tt % 10) + '0');
	}
	else if (tt > 99)
	{
		_putchar(' ');
		_putchar((tt / 100) + '0');
		_putchar(((tt % 100) / 10) + '0');
		_putchar(((tt % 100) % 10) + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(tt + '0');
	}

	if (j != n)
	{
		_putchar(',');
	}
}
