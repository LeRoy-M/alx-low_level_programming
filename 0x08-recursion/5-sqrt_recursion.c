#include "main.h"

int is_root(int n, int g);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: Receives integer input from the function
 *
 * Return: Always int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (is_root(n, 1));
	}
}

/**
 * is_root - Tests every number for root status
 *
 * @n: Parameter passed from sqrt_recursion
 * @g: Guess
 *
 * Return: Always -1 or g
 */

int is_root(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	else if (g == n)
	{
		return (-1);
	}

	return (is_root(n, (g + 1)));
}
