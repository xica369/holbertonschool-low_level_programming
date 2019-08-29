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
	int start, end, middle, cont;

	start = 0;
	end = (int)size;
	middle = end - start;

	if (array == NULL)
		return (-1);

	while (middle >= 1)
	{
		printf("Searching in array: ");
		for (cont = start; cont < end; cont++)
		{
			printf("%d", array[cont]);
			if (cont < end - 1)
				printf(", ");
		}
		printf("\n");
		middle = (end - start) / 2;
		if (value == array[middle - 1 + start])
			return (middle + start - 1);
		if (value < array[middle - 1 + start])
			end = middle - 1;
		if (value > array[middle - 1 + start])
		{
			if ((end - start) % 2 == 0)
				start = middle + start;
			else
				start = middle + 1 + start;
		}
	}
	return (-1);
}
