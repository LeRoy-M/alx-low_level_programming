#include "variadic_functions.h"

void to_stdout(int n);

/**
 * print_numbers - Prints numbers
 *
 * @separator: Comma & whitespace
 * @n: Argument count
 *
 * Return: Always int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list ap;

	if (n == 0)
	{
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, int);

		to_stdout(x);

		separator = ", ";
		while (*separator != '\0' && i < (n - 1))
		{
			_putchar(*separator);
			separator++;
		}
	}

	va_end(ap);
	_putchar('\n');
}

/**
 * to_stdout - Prints number
 *
 * @n: Integer received
 *
 * Return: void
 */

void to_stdout(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		to_stdout(n / 10);
	}

	_putchar((n % 10) + '0');
}

