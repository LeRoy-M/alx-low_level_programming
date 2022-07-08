#include <stdio.h>
#include "variadic_functions.h"

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

		printf("%d", x);

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	va_end(ap);
	printf("\n");
}
