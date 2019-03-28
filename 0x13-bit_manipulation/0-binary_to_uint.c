#include <stdio.h>
#include "holberton.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *
 *@b: number to convert
 *
 *Return: 0 if b not is a number o is null else the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pot = 1, num = 0, aux = 0, cont = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[cont])
	{
		cont++;
	}
	while (cont--)
	{
		if (b[cont] == '0' || b[cont] == '1')
		{
			aux = b[cont] - '0';
			num = num + (pot * aux);
			pot = pot * 2;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
