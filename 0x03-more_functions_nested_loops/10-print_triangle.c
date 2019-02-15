#include "holberton.h"
/**
 *print_triangle - prints a triangle
 *
 *@size: size of triangle
 *
 *Return: zero
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
	for (x = 0; x < size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if ((size - y) > x)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar(10);
	}
	}
	else
	{
		_putchar(10);
	}
}
