#include "main.h"

/**
 * reverse_array - Function that reverses the content of an
 * array of integers
 *
 * @a: Array of integers
 * @n: Number of integers in array
 *
 * Return: Always VOID
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
