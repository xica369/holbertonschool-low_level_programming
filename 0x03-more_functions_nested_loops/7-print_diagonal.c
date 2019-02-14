#include "holberton.h"
/**
 *print_diagonal - draws diagonal
 *
 *@n: long of diagonal
 *
 *Return: zero
 */
void print_diagonal(int n)
{
	int x, y;

	x = 1;
	while (x > 0 && x <= n)
	{
		y = 1;
		while (y < x)
		{
			_putchar(' ');
			y++;
		}
		_putchar(92);
		_putchar(10);
		x++;
	}
	if (n < 1)
	{
		_putchar(10);
	}
}
