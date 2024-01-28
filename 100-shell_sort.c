#include "sort.h"

/**
 * m_g - get the large sq gap
 * @size: size of array
 * Return: size
 */
size_t m_g(size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
		i = i * 3 + 1;
	return ((n - 1) / 3);
}

/**
 * shell_sort -  using the Shell sort algorithm
 * @array: array
 * @size: size of array
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	int temp;
	size_t x, y, gap;

	if (!array || !size)
		return;
	for (gap = m_g(size); gap; gap = (gap - 1) / 3)
	{
		for (x = gap; x < size; x++)
		{
			temp = array[x];
			for (y = x; y > gap - 1 && array[y - gap] > temp; y -= gap)
			{
				array[y] = array[y - gap];
			}
			array[y] = temp;
		}
		print_array(array, size);
	}
}
