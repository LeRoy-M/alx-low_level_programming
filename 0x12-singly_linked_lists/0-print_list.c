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
	unsigned int nod_cnt;
	int str_len;
	char *cpy_str;

	nod_cnt = str_len = 0;
	cpy_str = h->str;

	if (h->str != NULL)
	{
		while (*cpy_str != '\0')
		{
			cpy_str++;
			str_len++;
		}

	}

	do {
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", str_len);
		}
		else
		{
			printf("[%d] %s\n", str_len, h->str);
		}
		h = h->next;
		nod_cnt++;
	} while (h != NULL);

	return (nod_cnt);
}
