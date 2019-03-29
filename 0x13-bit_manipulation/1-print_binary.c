#include <stdio.h>
#include "holberton.h"

void unit_to_binary(unsigned long int n, unsigned long int);
/**
 *print_binary - prints the binary representation of a number
 *
 *@n: number to change
 */
void print_binary(unsigned long int n)
{
	unsigned long int d = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		unit_to_binary(n, d);
	}
}
/**
 *unit_to_binary - prints the binary representation of a number
 *
 *@n: number to change
 *@d: module of the number
 */
void unit_to_binary(unsigned long int n, unsigned long int d)
{
	if (n != 0)
	{
		d = n & 1;
		n = n >> 1;
		unit_to_binary(n, d);
		_putchar(d + '0');
	}
}
