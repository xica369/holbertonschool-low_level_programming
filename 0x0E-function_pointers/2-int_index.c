#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 *@array: pointer to array with elements
 *@size: number of elements
 *cpm: pointer to function to be used to compare values
 *
 *Return: -1 if no elements maches or ize <= 0 else the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cont;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (cont = 0; cont < size; cont++)
		{
			cmp(array[cont]);
			if (cmp(array[cont]) != 0)
			{
				return (cont);
			}
		}
		return (-1);
	}
	return (0);
}
