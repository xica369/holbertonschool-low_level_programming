#include "holberton.h"
int _sqrt(int n, int x);
/**
 *_sqrt - fuction that calculate the natural square root
 *
 *@n: namber to calculate the natural square root
 *@x: natural square root of the n
 *
 *Return: the natural square root of n, if it not have: -1
 */
int _sqrt(int n, int x)
{
	if (x * x < n)
	{
		return(_sqrt(n, (x + 1)));
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (x);
}
/**
 *_sqrt_recursion - returns the natural square root of a number
 *
 *@n: number to calculate the square root
 *
 *Return: -1 if n not have a natural square root else the square root
 */
int _sqrt_recursion(int n)
{
	int x = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return(_sqrt(n, x));
	}
}
