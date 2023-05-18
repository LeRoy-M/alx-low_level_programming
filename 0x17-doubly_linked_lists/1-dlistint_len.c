#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 *
 * @h: Head of linked list
 *
 * Return: Always integer
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int cnt;
	const dlistint_t *current;

	cnt = 0;
	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (EXIT_FAILURE);

	current = h;
	while (current != NULL)
	{
		cnt++;
		current = current->next;
	}

	return (cnt);
}
