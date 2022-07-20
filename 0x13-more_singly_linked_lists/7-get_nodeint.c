#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a 'listint_t' linked list
 *
 * @head: Receives input during function call
 * @index: Receives input during function call
 *
 * Return: address
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
