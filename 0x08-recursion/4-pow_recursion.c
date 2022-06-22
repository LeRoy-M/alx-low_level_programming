#include "main.h"

/**
 * _pow_recursion - Returns the value of 'x' raised power of 'y'
 *
 * @x: Receives integer input passed to function
 * @y: Receives integer input passed to function
 *
 *  Return: Always int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}
