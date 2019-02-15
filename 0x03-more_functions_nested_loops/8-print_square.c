#include "holberton.h"
/**
 *print_square - print a square
 *
 *@size: size of square
 *
 *Return: zero
 */
void print_square(int size)
{
	int x, y;

	x = 1;
	while (x > 0 && x <= size)
	{
		y = 1;
		while (y <= size)
		{
			_putchar('#');
			y++;
		}
		_putchar(10);
		x++;
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
