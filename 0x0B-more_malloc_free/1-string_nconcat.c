#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **string_nconcat - function that concatenates two strings
 *
 *@s1: first string to concatenate
 *@s2: second string to concatenate
 *@n: numbert to the byetes to copy of s2
 *
 *Return: NULL if the functions fails or a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cont = 0, cont1, cont2, cont3;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (cont1 = 0; s1[cont1]; cont1++)
	{
	}
	for (cont2 = 0; s2[cont2]; cont2++)
	{
	}
	if (cont2 <= n)
	{
		n = cont2;
	}
	s3 = malloc(sizeof(*s3) * (cont1 + n) + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (cont3 = 0; cont3 < (cont1 + n); cont3++)
	{
		if (cont3 < cont1)
		{
			s3[cont3] = s1[cont3];
		}
		else
		{
			s3[cont3] = s2[cont];
			cont = cont + 1;
		}
	}
	return (s3);
}
