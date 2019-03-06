#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **_strdup -  copy of the string and returns a pointer with its newly allocated
 *
 *@str: pointer to string to copy
 *
 *Return: NULL if str = NULL or insufficient memory else a pointer
 */
char *_strdup(char *str)
{
	int cont;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (cont = 0; str[cont]; cont++)
	{
	}
	s = malloc(sizeof(*s) * cont + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (cont = 0; str[cont]; cont++)
	{
		s[cont] = str[cont];
	}
	return (s);
}
