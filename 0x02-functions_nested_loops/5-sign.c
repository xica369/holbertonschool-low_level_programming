#include "holberton.h"
/**
 *print_sign - print the sign of a number (positive, zero or negative)
 *
 *@n: variable int
 *
 *Return: 1, 0 or -1 depends of the number in c
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
