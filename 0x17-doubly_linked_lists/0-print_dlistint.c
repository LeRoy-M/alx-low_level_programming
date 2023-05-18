#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 *
 * @h: Head of list
 *
 * Return: Always integer
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *current;

	count = 0;
	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (EXIT_FAILURE);

	current = h;
	while (current != NULL)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}

	return (count);
}
