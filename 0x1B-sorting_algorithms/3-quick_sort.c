#include "sort.h"

/**
 * partition - recursively does Lomuto partition
 * @array: the array to be sorted
 * @start: the first element of the array
 * @end: the pivot for the array
 */
void partition(int *array, int start, int end, size_t size)
{
	int index, aux, pivot, i, start2, end2, end1, start1;

		pivot = end - 1;
		index = start;
		for (i = start; i <= pivot; i++)
		{
			if (array[pivot] >= array[i])
			{
				aux = array[i];
				array[i] = array[index];
				array[index] = aux;
				index++;
				print_array(array, size);
			}
		}
		start1 = start;
		end1 = index - 1;
		start2 = index + 1;
		end2 = pivot;

		if (end1 != start1 && start1 >= 0 && end > 0)
			partition(array, start1, end1, size);
		if (end2 != start2 && start2 < pivot && end < pivot)
			partition(array, start2, end2, size);
}


/**
 * quick_sort - a function that sorts an array by quick sort
 * @array: the array to be sorted
 * @size: number of elements that the array has
 */
void quick_sort(int *array, size_t size)
{
	int pivot, start;

	pivot = size;
	start = 0;
	partition(array, start, pivot, size);
}
