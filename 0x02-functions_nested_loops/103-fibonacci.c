#include <stdio.h>

/**
 * main - Function finds and prints sum of even-valued terms in
 * Fibonacci sequence not exceeding '4000000'
 *
 * Return: Always '0'
 */

int main(void)
{
	long i, j, x, y, sum_even;

	i = 0, j = 1, x = i + j, y = j + x;
	sum_even = 0;

	while (y <= 4000000)
	{
		i = x, j = y;
		x = i + j, y = j + x;

		if ((x % 2) == 0)
			sum_even += x;

		if ((y % 2) == 0)
			sum_even += y;
	}

	printf("%ld\n", sum_even);

	return (0);
}
