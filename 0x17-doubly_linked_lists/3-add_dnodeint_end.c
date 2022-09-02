#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a 'dlistint_t' list
 *
 * @head: Input from function call
 * @n: Input from function call
 *
 * Return: address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node, *temp;

	temp = *head;
	last_node = malloc(sizeof(dlistint_t));

	if (last_node == NULL)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = last_node;

	return (last_node);
}
