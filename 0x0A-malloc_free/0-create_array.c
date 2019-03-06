#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 **create_array - creates an array of chars, and initializes it with a char
 *
 *@size: lenght to array
 *@c: char to initializes the array
 *
 *Return: NULL if size = 0 or if it fails, else a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int cont;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(*s) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (cont = 0; cont < size; cont++)
	{
		s[cont] = c;
	}
	return (s);
}
