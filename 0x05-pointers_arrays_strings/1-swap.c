#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: Local Pointer
 * @b: Local Pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
