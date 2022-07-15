#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a 'list_t' list
 *
 * @head: Input from function call
 * @str: Input from function call
 *
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int str_len;
	list_t *last_node, *temp;

	str_len = 0;
	do {
		str++;
		str_len++;
	} while (*str != '\0');

	temp = *head;
	last_node = malloc(sizeof(list_t));

	last_node->str = strdup(str);
	last_node->len = str_len;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (NULL);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = last_node;

	return (*head);
}
