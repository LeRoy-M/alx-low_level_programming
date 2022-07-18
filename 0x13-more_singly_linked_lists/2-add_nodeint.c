#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a 'listint_t' list
 *
 * @head: Input from function call
 * @n: Input from function call
 *
 * Return: address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node;

	first_node = malloc(sizeof(listint_t));

	first_node->n = n;
	first_node->next = (*head);
	(*head) = first_node;

	if (first_node == NULL)
	{
		return (NULL);
	}

	return (first_node);
}
