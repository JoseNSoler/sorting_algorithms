#include "sort.h"

/**
 * bubble_sort - Sort an array of integers - ascending order
 * @array: Array of integers to analyze
 * @size: Size of array
 *
 * Returns: void function
 * - in every swap, prints news positions
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int state = 1;

	if (array == NULL || size < 2)
		return;

	while (state == 1)
	{
		state = 0;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				state = 1;
			}
		}
		len--;
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
