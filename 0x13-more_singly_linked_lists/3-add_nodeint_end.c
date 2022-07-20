#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a 'listint_t' list
 *
 * @head: Input from function call
 * @n: Input from function call
 *
 * Return: address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *temp;

	temp = *head;
	last_node = malloc(sizeof(listint_t));

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
