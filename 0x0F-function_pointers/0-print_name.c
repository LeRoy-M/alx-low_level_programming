#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 *
 * @name: Input received during function call
 * @f: Function Pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *f != NULL)
	{
		(*f)(name);
	}
}
