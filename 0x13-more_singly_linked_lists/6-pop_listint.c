#include "lists.h"

/**
 * pop_listint - Deletes the head node of a 'listint_t' linked list
 *
 * @head: Receives input during function call
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if ((*head) == NULL)
		return (0);

	(*head) = temp->next;
	free(temp);
	return ((*head)->n);
}
