#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 *
 * @head: Head of the linked list
 * @n: Integer data to be added to the list
 *
 * Return: Always pointer to linked list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}

	while ((*head)->prev != NULL)
	{
		*head = (*head)->prev;
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;

	return (*head);
}
