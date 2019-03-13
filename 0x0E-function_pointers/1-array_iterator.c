#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - function that executes a function given as a parameter
 *
 *@array: array with arguments
 *@size: number of argments
 *@action: pointer to functions
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int cont;

	if (array != NULL && action != NULL)
	{
		for (cont = 0; cont < size; cont++)
		{
			(*action)(array[cont]);
		}
	}
}
