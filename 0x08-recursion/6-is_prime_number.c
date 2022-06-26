#include "main.h"

int is_prime(int n, int d);

/**
 * is_prime_number - Returns '1' if the input is a prime number, else '0'
 *
 * @n: Receives integer input passed to function
 *
 * Return: Always 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, (n - 1)));
	}
}

/**
 * is_prime - Checks for prime number status
 *
 * @n: Tested if prime
 * @d:Divisor
 *
 * Return: Always 0 or 1
 */

int is_prime(int n, int d)
{
	if ((n % d) == 0 && d != 1)
	{
		return (0);
	}
	else if (d - 1 == 0)
	{
		return (1);
	}

	return (is_prime(n, (d - 1)));
}
