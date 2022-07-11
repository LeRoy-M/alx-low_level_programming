#include "3-calc.h"

/**
 * op_add - Adds two integers
 *
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Operation Result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 *
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Operation Result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 *
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Operation Result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 *
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Operation Result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Mods two integers
 *
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Operation Result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
