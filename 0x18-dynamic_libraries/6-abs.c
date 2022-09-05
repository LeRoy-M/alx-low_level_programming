#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @i: Received input from function
 *
 * Return: Always abs_int
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return ((i * (-1)));
	}
}
