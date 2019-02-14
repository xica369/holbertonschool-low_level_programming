#include "holberton.h"
/**
 *print_line - draws a straight line in the terminal
 *
 *@n: long of line
 *
 *Return: zero
 */
void print_line(int n)
{
	int i;

	i = 1;
	while (i <= n && i > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar(10);
}
