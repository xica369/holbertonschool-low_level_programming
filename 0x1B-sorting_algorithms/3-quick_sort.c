#include "sort.h"

/**
 * partition - recursively does Lomuto partition
 * @array: the array to be sorted
 * @start: the first element of the array
 * @end: the pivot for the array
 */
void partition(int *array, int start, int end, size_t size)
{
	int index, aux, last_index, i;

	last_index = end;
	index = start;
	for (i = start; i < last_index; i++)
	{
		if (array[i] < array[last_index])
		{
			aux = array[i];
			array[i] = array[index];
			array[index] = aux;
			index++;
			print_array(array, size);
		}
	}
	printf("i: %d, pivot: %d, index: %d\n", i, array[last_index], index);
	aux = array[i];
	array[i] = array[index];
	array[index] = aux;
	if (end > start)
	{
		partition(array, start, index - 1, size);
		partition(array, index + 1, end, size);
	}
}


/**
 * quick_sort - a function that sorts an array by quick sort
 * @array: the array to be sorted
 * @size: number of elements that the array has
 */
void quick_sort(int *array, size_t size)
{
	int pivot, start;

	pivot = size - 1;
	start = 0;
	partition(array, start, pivot, size);
}
