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
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (*head);
}
