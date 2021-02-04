
#include "sort.h"

/**
 * quick_sort - Sort an array of integers ascending order - quick sort
 *
 * @array: array int to be analyzed
 * @size: length of given user's array
 */

void quick_sort(int *array, size_t size)
{
	if (size > 1)
	{
		int pivot = partition(array, 0, size - 1);

		quick_sort(array, pivot);
		quick_sort(array + pivot + 1, size - pivot - 1);
	}
}

/**
 * partition - Lomuto partition theory
 * @array: array to analyze
 * @index_l: low index
 * @index_h: high index for pivot
 *
 * Return: index of partition
 */

int partition(int *array, int index_l, int index_h)
{
	int x = 0, y = 0;
	int pivot = array[index_h];

	for (y = x = index_l; y < index_h; y++)
		if (array[y] < pivot)
			swaper(&array[x++], &array[y], array, index_h + 1);
	swaper(&array[x], &array[index_h], array, index_h + 1);
	return (x);
}


/**
 * swaper - swaps int values and prints on every move
 *
 * @array: Pointer to first element of initial array
 * @a: Pointer to the first integer to swap
 * @b: Pointer to the second integer to swap
 * @size: Full size of initial array
 */

void swaper(int *a, int *b, int *array, int size)
{
	static int *ptr, s;
	int t = *a;

	if (*a != *b)
	{
		*a = *b;
		*b = t;
		if (!ptr)
			ptr = array, s = size;
		print_array(ptr, s);
	}
}
