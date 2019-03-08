#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 **_calloc - function that allocates memory for an array, using malloc
 *
 *@nmemb: numbero of elements of array
 *@size: size of bytes each elements
 *
 *Return: NULL if malloc fails or nmemb or size is 0 else return a array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int cont;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (cont = 0; cont < nmemb * size; cont++)
	{
		s[cont] = 0;
	}
	return (s);
}
