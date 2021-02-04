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
	int x = 0, y = 0, min_idx = 0, copy = 0;

	copy = size;
	for (x = 0; x < copy - 1; x++)
	{
		min_idx = x;
			for (y = x + 1; y < copy; y++)
				if (array[y] < array[min_idx])
					min_idx = y;
	swap_ints(&array[min_idx], &array[x]);
	print_array(array, copy);
	}
}


/**
 * swap_ints - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */

void swap_ints(int *x, int *y)
{
	int tempo;

	tempo = *x;
	*x = *y;
	*y = tempo;
}
