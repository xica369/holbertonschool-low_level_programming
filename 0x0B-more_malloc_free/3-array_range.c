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
	int cont, i = 0;
	int *s;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(*s) * (max - min + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (cont = min; cont <= max; cont++, i++)
	{
		s[i] = cont;
	}
	return (s);
}
