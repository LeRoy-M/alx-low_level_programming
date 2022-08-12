#include <stdio.h>

/**
 * main - Computes and prints sum of all the multiples of '3' and
 * '5' below '1024'
 *
 * Return: void
 */

int main(void)
{
	int i, j, k, sum_of_muls;

	i = 3, j = 5, k = 1024, sum_of_muls = 0;

	k--;

	while (k > 0)
	{
		if (((k % i) == 0) || ((k % j) == 0))
		{
			sum_of_muls += k;
			k--;
		}
		else
			k--;
	}
	printf("%d\n", sum_of_muls);

	return (0);
}
