#include "sort.h"

/**
 * selection_sort - sorts an array of ints using the selection sort algorithm
 * @array: The array to sort
 * @size: The size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, min_idx, step;

	if (array == NULL)
		return;

	for (step = 0; step < size - 1; step++)
	{
		min_idx = step;
		for (i = step + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
			min_idx = i;
		}
		swap(&array[min_idx], &array[step]);
		print_array(array, size);
	}
}

/**
 * swap - swaps 2 ints in an int array
 * @a: int 1
 * @b: int 2
 *
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
