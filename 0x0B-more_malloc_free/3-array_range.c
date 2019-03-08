#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **array_range - function that creates an array of integers min - max
 *
 *@min: min number
 *@max: max number
 *
 *Return: NULL if min > max, if malloc fails, else a pointer
 */
int *array_range(int min, int max)
{
	int size, cont;
	int *s;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;
	s = malloc(sizeof(*s) * (size + 2));
	if (s == NULL)
	{
		return (NULL);
	}
	for (cont = min; cont <= max; cont++)
	{
		s[cont] = cont;
	}
	return (s);
}
