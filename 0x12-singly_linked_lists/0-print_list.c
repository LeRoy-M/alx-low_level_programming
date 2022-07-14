#include "lists.h"

/**
 * print_list - Prints all the elments of a 'list_t' list
 *
 * @h: Input from function call
 *
 * Return: unsigned int
 */

size_t print_list(const list_t *h)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		printf("[%d] %s\n", h->next->len, h->next->str);
		return (2);
	}

	printf("[%d] %s\n", h->len, h->str);
	printf("[%d] %s\n", h->next->len, h->next->str);

	return (2);
}
