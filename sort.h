#ifndef _SORT_H
#define _SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_n(listint_t *a1, listint_t *a2);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void qs(int *array, size_t size, ssize_t first, ssize_t last);
size_t lomuto_partition(int *array, size_t size, ssize_t first, ssize_t last);
void swap(int *array, size_t size, int *a1, int *a2);

#endif
