#include "sort.h"

/**
 * selection_sort - sorts an array of ints using the selection sort algorithm
 * @array: The array to sort
 * @size: The size of the array
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, idx;
	int min, flag = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				idx = j;
				flag = 1;
			}
			if ((flag == 1) && (j == size - 1))
			{
				swap(&array[idx], &array[i]);
				print_array(array, size);
			}
		}
		flag = 0;
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
