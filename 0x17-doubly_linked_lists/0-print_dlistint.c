#include "lists.h"

/**
 * print_dlistint - Prints all the elments of a 'dlistint_t' list
 *
 * @h: Input from function call
 *
 * Return: unsigned int
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int nod_cnt;

	nod_cnt = 0;
	if (h == NULL)
		return (0);

	do {
		printf("%i\n", h->n);
		h = h->next;
		nod_cnt++;
	} while (h != NULL);

	return (nod_cnt);
}
