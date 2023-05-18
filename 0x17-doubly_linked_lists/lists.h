#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
	    int n;
	        struct dlistint_s *prev;
		    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h); /* #0 */
size_t dlistint_len(const dlistint_t *h); /* #1 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n); /* #2 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n); /* #3 */
void free_dlistint(dlistint_t *head); /* #4 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index); /* #5 */
int sum_dlistint(dlistint_t *head); /* #6 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n); /* #7 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index); /* #8 */

#endif /* LISTS_H */
