#include "lists.h"

/**
 * free_listint2 - Frees a 'listint_t' list
 *
 * @head: Receives input during function call
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
