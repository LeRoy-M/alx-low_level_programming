#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 *
 * @n: Receives integer input passed to function
 *
 * Return: Always int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
