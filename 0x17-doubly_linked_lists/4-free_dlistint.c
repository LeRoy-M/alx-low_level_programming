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
	while(head != NULL)
	{
		free(head);
		head = head->next;
	}
}
