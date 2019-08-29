#include "search_algos.h"

/**
 *binary_search - searches a value in sorted array with Binary search algorithm
 *
 *@array: a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *
 *Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int start, end, middle, cont = 0;

	start = 0;
	end = size - 1;

	if (!array)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (cont = start; cont <= end; cont++)
		{
			printf("%d", array[cont]);
			if (cont < end)
				printf(", ");
		}
		printf("\n");
		middle = (end + start) / 2;

		if (value == array[middle])
			return (middle);

		if (value < array[middle])
			end = middle - 1;

		if (value > array[middle])
			start = middle + 1;
	}
	return (-1);
}
