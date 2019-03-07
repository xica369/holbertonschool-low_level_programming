#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *void *malloc_checked - function that allocates memory using malloc
 *
 *@: size of memory to separate
 *
 *Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = (void *) malloc(b);
	if (s == NULL)
	{
		exit (98);
	}
	return (s);
}
