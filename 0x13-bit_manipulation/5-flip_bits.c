#include <stdio.h>
#include "holberton.h"
/**
 *flip_bits - show: number of bits that need to get from one number to another
 *
 *@n: number to compare
 *@m: number to compare
 *
 *Return: the number of diferents bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cont, res, num, Nbits = 0;

	num = n ^ m;
	for (cont = 0; num != 0; cont++)
	{
		res = num & 1;
		num = num >> 1;
		if (res == 1)
		{
			Nbits++;
		}
	}
	return (Nbits);
}
