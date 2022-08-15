#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, n, j;

	if (array == NULL || size < 2)
		return;

	n = size;
	while (i < n - 1)
	{
		for (j = 0; j < n - i - 1; j++)
		{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
				}
		}
		i++;
	}

}

/**
 * swap - swaps 2 ints in an int array
 * @a: int 1
 * @b: int 2
 *
 * Return: void
 */

void swap(int* a, int* b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
