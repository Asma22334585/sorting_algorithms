#include "sort.h"

/**
 * swap - swap two int
 * @array: array
 * @size: size of array
 * @a1: address of int 1
 * @a2: address of int 2
 */
void swap(int *array, size_t size, int *a1, int *a2)
{
	if (*a1 != *a2)
	{
		*a1 = *a1 + *a2;
		*a2 = *a1 - *a2;
		*a1 = *a1 - *a2;
		print_array((const int *)array, size);
	}
}

/**
 * lomuto_partition - Lomuto partition scheme.
 * @array: array
 * @size: size of array
 * @first: the first elemet
 * @last: the last element
 * Return: size_t
 */
size_t lomuto_partition(int *array, size_t size, ssize_t first, ssize_t last)
{
	int x, y, pivot = array[last];

	for (x = y = first; y < last; y++)
		if (array[y] < pivot)
			swap(array, size, &array[y], &array[x++]);
	swap(array, size, &array[x], &array[last]);
	return (x);
}

/**
 * qs -  Quick sort algorithm
 * @array: array
 * @size: size of array
 * @first: the first elemet
 * @last: the last element
 */
void qs(int *array, size_t size, ssize_t first, ssize_t last)
{
	size_t p = 0;

	if (first < last)
	{
		p = lomuto_partition(array, size, first, last);

		qs(array, size, first, p - 1);
		qs(array, size, p + 1, last);
	}
}

/**
 * quick_sort - using the Quick sort algorithm
 * @array: array
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	qs(array, size, 0, size - 1);
}
