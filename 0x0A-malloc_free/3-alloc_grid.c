#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
***alloc_grid - that returns a pointer to a 2 dimensional array of integers
*
*@width: size of colum
*@height: size of row
*
*Return: NULL if failure or width or height is 0 or negative, else a pointer
*/
int **alloc_grid(int width, int height)
{
	int c1, c2, **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (c1 = 0; c1 < height; c1++)
	{
		a[c1] = malloc(sizeof(int) * width);
		if (a == NULL)
		{
			for (; c1 == 0; c1--)
			{
			free(a[c1]);
			}
			free(a);
			return (NULL);
		}
	}
	for (c1 = 0; c1 < height; c1++)
	{
		for (c2 = 0; c2 < width; c2++)
		{
			a[c1][c2] = 0;
		}
	}
	return (a);
}
