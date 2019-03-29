#include <stdio.h>
#include "holberton.h"
/**
 *get_endianness - function that checks the endianness
 *
 *Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *endianness = (char *) &num;

	if (endianness)
		return (1);
	else
		return (0);
}
