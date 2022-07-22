#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: Receives input during function call
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, j, base2;
	char buffer1[32], buffer2[32];

	for (i = 31; i >= 0; i--)
	{
		base2 = n >> i;

		if (base2 & 1)
			buffer1[i] = '1';
		else
			buffer1[i] = '0';
	}

	for (i = 32 - 1, j = 0; i >= 0; i--, j++)
	{
		buffer2[j] = buffer1[i];
	}
	for (i = 0; i < 32; i++)
	{
		if (buffer2[i] == '0')
		{
			for (j = 0; j < i; j++)
			{
				if (buffer2[j] > '0')
					_putchar(buffer2[i]);

				else if (j == 30)
					_putchar('0');
			}
		}
		else
		{
			_putchar(buffer2[i]);
		}
	}
}
