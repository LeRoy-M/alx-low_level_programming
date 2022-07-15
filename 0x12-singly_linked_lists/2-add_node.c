#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a 'list_t' list
 *
 * @head: Input from function call
 * @str: Input from function call
 *
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int str_len;
	list_t *first_node;

	str_len = 0;
	do {
		str++;
		str_len++;
	} while (*str != '\0');

	first_node = malloc(sizeof(list_t));

	first_node->str = strdup(str);
	first_node->len = str_len;
	first_node->next = (*head);
	(*head) = first_node;

	if (first_node == NULL)
	{
		return (NULL);
	}

	return (first_node);
}
