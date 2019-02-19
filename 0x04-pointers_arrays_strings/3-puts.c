#include "holberton.h"
/**
 *_puts - prints a string, followed by a new line
 *
 *@str: pointer with the string
 *
 *Return: zero
 */
void _puts(char *str)
{
	int x = 0, y = 1;

	while (y != '\0')
	{
		y = *(str + x);
		_putchar(y);
		x++;
	}
	_putchar(10);
}
