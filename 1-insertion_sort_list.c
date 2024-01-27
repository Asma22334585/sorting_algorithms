#include "sort.h"

/**
 * swap_n - swap tow nodes in list
 * @a1: node 1 address
 * @a2: node 2 address
 * Return: void
 */

void swap_n(listint_t *a1, listint_t *a2)
{
	if (a1->prev)
		a1->prev->next = a2;
	if (a2->next)
		a2->next->prev = a1;
	a1->next = a2->next;
	a2->prev = a1->prev;
	a1->prev = a2;
	a2->next = a1;
}

/**
 * insertion_sort_list -  sorts doublyLinkedList of int in ascending order
 * @list: list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *x, *y;

	if (!list || !*list || !(*list)->next)
		return;
	x = (*list)->next;
	while (x)
	{
		y = x;
		x = x->next;
		while (y && y->prev)
		{
			if (y->prev->n > y->n)
			{
				swap_n(y->prev, y);
				if (!y->prev)
					*list = y;
				print_list((const listint_t *)*list);
			}
			else
				y = y->prev;
		}
	}
}
