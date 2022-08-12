#include <stdio.h>

/**
 * main - Function prints first 50 Fibonacci numbers, starting
 * with '1' and '2'
 *
 * Return: Always '0'
 */

int main(void)
{
	long i, j, x, y, sequence;

	i = 0, j = 1, x = i + j, y = j + x;
	sequence = 0;

	while (sequence != 50)
	{
		printf("%ld, %ld", x, y);

		i = x, j = y;
		x = i + j, y = j + x;
		sequence += 2;
		if (sequence != 50)
			printf(", ");
	}
	printf("\n");

	return (0);
}
