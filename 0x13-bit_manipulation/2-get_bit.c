#include <stdio.h>
#include "holberton.h"
/**
 *get_bit - function that returns the value of a bit at a given index
 *
 *@n: number to evalue
 *@index: index of the bit that want to get
 *
 *Return: the value of the bit at index else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index < 64)
	{
		num = (n >> index) & 1;
		return (num);
	}
	return (-1);
}
