#include "holberton.h"
/**
 *_pow_recursion - function that returns the value of x raised to the power y
 *
 *@x: number base
 *@y: number to raised to x
 *
 *Return: -1 if y is lower than 0, else the raised of x
 */
int _pow_recursion(int x, int y)
{
	int power = 0;

	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
	power = _pow_recursion(x, y - 1) * x;
	return (power);
	}
}
