#include "sort.h"
/**
 *shell_sort - function that sorts an array
 *
 *@array: array to sort
 *@size_t_size: number of elements of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t aux, i, flag;
	int temp;

	aux = size / 2;
	while (aux > 0)
	{
		flag = 0;
		for (i = 0; i + aux < size; i++)
		{
			if (array[i] > array[i + aux])
			{
				temp = array[i];
				array[i] = array[i + aux];
				array[i + aux] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			aux = aux / 2;
			print_array(array, size);
		}
	}
}
