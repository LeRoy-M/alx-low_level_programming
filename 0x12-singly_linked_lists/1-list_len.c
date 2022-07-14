#include "lists.h"

/**
 * list_len - Returns the number of elements in list_t list
 *
 * @h: Struct input from passed during function call
 *
 * Return: unsigned int
 */

size_t list_len(const list_t *h)
{
	int ele_cnt;
	const list_t *temp;

	ele_cnt = 0;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		ele_cnt++;
	}

	return (ele_cnt);
}
