#include "sort.h"

/**
 * selection_sort - Sort an array of integers ascending order
 * selection way
 * @array: Array of integers to analyze
 * @size: Size of array
 *
 * Returns: void function
 * - in every swap, prints news positions
 */

void selection_sort(int *array, size_t size)
{
	size_t x = 0, y = 0, tempo = 0, min_idx = 0;

	if (!array)
		return;
	for (x = 0; x < size - 1; x++)
	{
		min_idx = x;
		for (y = x + 1; y < size; y++)
			if (array[min_idx] > array[y])
				min_idx = y;

		if (min_idx != x)
		{
			tempo = array[x];
			array[x] = array[min_idx];
			array[min_idx] = tempo;
			print_array(array, size);
		}
	}
}
