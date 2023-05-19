#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 *
 * @head: Head of the linked list
 *
 * Return: Always VOID
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
