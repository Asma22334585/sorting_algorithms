#include "sort.h"

/**
 * selection_sort - sorts an array/using the Selection sort algorithm
 * @array: array
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t x, y, z;

	if (!array || !size)
		return;
	for (x = 0; x < size - 1; x++)
	{
		for (y = size - 1, z = x + 1; y > x; y--)
		{
			if (array[y] < array[z])
			{
				z = y;
			}
		}
		if (array[x] > array[z])
		{
			temp = array[x];
			array[x] = array[z];
			array[z] = temp;
			print_array(array, size);
		}
	}
}
