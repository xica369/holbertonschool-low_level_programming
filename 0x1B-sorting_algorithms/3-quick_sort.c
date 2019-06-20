#include "sort.h"

int partition(int *array, int start, int end, size_t size);
/**
 * recursion - recursively does quick sort
 * @array: the array to be sorted
 * @start: the first element of the array
 * @end: the pivot for the array
 * @size: number of elements of the array
 */
void recursion(int *array, int start, int end, size_t size)
{
	size_t index = 0;

	if (start < end)
	{
		index = partition(array, start, end, size);
		if (index > 0)
			recursion(array, start, index - 1, size);
		if (index != size)
			recursion(array, index + 1, end, size);
	}
}


/**
 * partition - it does Lomuto partition
 * @array: the array to be sorted
 * @start: the first element of the array
 * @end: the pivot for the array
 * @size: number of elements of the array
 *
 * Return: index for the sort
 */
int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end], index = start, i, aux;

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			aux = array[i];
			array[i] = array[index];
			array[index] = aux;
			index++;
			print_array(array, size);
		}
	}
	aux = array[index];
	array[index] = array[end];
	array[end] = aux;
	return (index);
}

/**
 * quick_sort - a function that sorts an array by quick sort
 * @array: the array to be sorted
 * @size: number of elements that the array has
 */
void quick_sort(int *array, size_t size)
{
	int start = 0, end = size - 1;

	if (array != NULL && size != 0)
		recursion(array, start, end, size);
}
