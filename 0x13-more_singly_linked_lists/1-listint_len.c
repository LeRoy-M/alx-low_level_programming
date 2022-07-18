#include "lists.h"

/**
 * listint_len - Returns the number of elements in 'listint_t' list
 *
 * @h: Struct input from passed during function call
 *
 * Return: unsigned int
 */

size_t listint_len(const listint_t *h)
{
	int ele_cnt;
	const listint_t *temp;

	ele_cnt = 0;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		ele_cnt++;
	}

	return (ele_cnt);
}
