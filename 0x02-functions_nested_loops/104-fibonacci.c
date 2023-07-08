#include <stdio.h>

/**
 * main - Function prints first 98 Fibonacci numbers, starting
 * with '1' and '2', followed by a new line
 *
 * Return: Always '0'
 */

int main(void)
{
	unsigned long int i = 0, j = 0, fib = i + j;
	int sequence = 0;

	while (sequence != 98)
	{
		printf("%lu", fib);

		i = j, j = fib;
		fib = i + j;

		sequence++;
		if (sequence != 97)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
