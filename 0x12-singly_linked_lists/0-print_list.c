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
	int nod_cnt;
	const list_t *count;

	nod_cnt = 1;
	count = h;

	do {
		nod_cnt++;
		/*count = count->next;*/
	} while (count != h);

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		printf("[%d] %s\n", h->next->len, h->next->str);
		return (nod_cnt);
	}

	printf("[%d] %s\n", h->len, h->str);
	printf("[%d] %s\n", h->next->len, h->next->str);

	return (nod_cnt);
}