#include "3-calc.h"

/**
 * get_op_func - Function Pointer
 *
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Always SM
 */

int (*get_op_func(char *s)(int, int))
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if 
}
