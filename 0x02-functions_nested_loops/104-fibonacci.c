#include "main.h"
#include <stdio.h>

/**
 * main - Function prints first 98 Fibonacci numbers, starting
 * with '1' and '2', followed by a new line
 *
 * Return: Always '0'
 */

int main(void)
{
	unsigned long int i, j, x, y, sequence;

	i = 0, j = 1, x = i + j, y = j + x;
	sequence = 0;

	while (sequence != 98)
	{
		printf("%lu, %lu", x, y);

		i = x, j = y;
		x = i + j, y = j + x;
		sequence += 2;
		if (sequence != 98)
			printf(", ");
	}
	putchar('\n');

	return (0);
}
