#include "holberton.h"
/**
 *_abs - print the absolute value
 *
 *@r: variable r
 *
 *Return: zero
 */
int _abs(int r)
{

	int x;

	if (r >= 0)
	{
		x = r;
	}
	if (r < 0)
	{
		x = r * -1;
	}
	return (x);
}
