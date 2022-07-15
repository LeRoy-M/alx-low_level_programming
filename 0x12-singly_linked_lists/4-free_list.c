#include "lists.h"

/**
 * free_list - Frees 'list_t' list
 *
 * @head: Input from function call
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
		free(temp->str);
	}
}
