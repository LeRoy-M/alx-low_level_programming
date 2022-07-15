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
	const list_t *temp;
	unsigned int str_len;
	char *cpy_str;

	nod_cnt = str_len = 0;
	cpy_str = h->str;
	temp = h;

	if (h->str != NULL)
	{
		while (*cpy_str != '\0')
		{
			cpy_str++;
			str_len++;
		}
	}

	do {
		temp = temp->next;
		nod_cnt++;
	} while (temp != NULL);

	if (cpy_str == NULL)
	{
		printf("[%d] (nil)\n", str_len);
		printf("[%d] %s\n", h->next->len, h->next->str);
		return (nod_cnt);
	}

	printf("[%d] %s\n", str_len, h->str);
	printf("[%d] %s\n", h->next->len, h->next->str);

	return (nod_cnt);
}
