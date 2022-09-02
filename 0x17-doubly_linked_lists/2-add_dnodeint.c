#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a 'dlistint_t' list
 *
 * @head: Input from function call
 * @n: Input from function call
 *
 * Return: address
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first_node;

	first_node = malloc(sizeof(dlistint_t));

	if (first_node == NULL)
		return (NULL);

	first_node->n = n;
	first_node->prev = NULL;
	/* Start */
	if (*head == NULL)
	{
		first_node->next = NULL;
		*head = first_node;
		return (*head);
	}
	else
	{
		while ((*head)->prev != NULL)
		{
			*head = (*head)->prev;
		}
		first_node->next = *head;
		(*head)->prev = first_node;
		*head = first_node;
	}
	/* Stop */

	return (*head);
}
