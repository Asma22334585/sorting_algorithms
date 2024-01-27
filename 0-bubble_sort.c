#include "sort.h"

/**
 * bubble_sort - sorts an array of int in ascending order
 * @array: array
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t x, y;

	if (!array || !size)
		return;

	x = 0;
	while (x < size)
	{
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size)
			}
		}
		x++;
	}
}
