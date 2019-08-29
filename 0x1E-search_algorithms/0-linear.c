#include "search_algos.h"

/**
 *linear_search - searches for a value in an array of integers
 *
 *@array: a pointer to the first element of the array to search
 *@size: the number of elements in array
 *@value: the value to search
 *
 *Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int cont;

	if (array == NULL)
		return (-1);

	for (cont = 0; cont < (int)size; cont++)
	{
		printf("Value checked array[%d] = [%d]\n", cont, array[cont]);
		if (array[cont] == value)
			return (cont);
	}
	return (-1);
}
