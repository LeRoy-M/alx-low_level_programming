#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in 'dlistint_t' list
 *
 * @h: Struct input from passed during function call
 *
 * Return: unsigned int
 */

size_t dlistint_len(const dlistint_t *h)
{
	int ele_cnt;

	ele_cnt = 0;

	for (; h != NULL; h = h->next)
	{
		ele_cnt++;
	}

	return (ele_cnt);
}
