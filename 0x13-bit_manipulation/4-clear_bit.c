#include <stdio.h>
#include "holberton.h"
/**
 *clear_bit - function that sets the value of a bit to 0 at a given index
 *
 *@n: number to change
 *@index: index of the bit that want to set
 *
 *Return: 1 if it worked else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
