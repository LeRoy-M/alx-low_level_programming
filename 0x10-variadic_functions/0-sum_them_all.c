#include "variadic_functions.h"

/**
 * sum_them_all - Sums params
 *
 * @n: Argument count
 *
 * Return: Always int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
