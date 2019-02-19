#include "holberton.h"
/**
 *print_rev - prints in reverse a string
 *
 *@s: pointer with the string
 *
 *Return: zero
 */
void print_rev(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		s++;
		x++;
	}
	while (x >= 0)
	{
		_putchar(*s);
		x--;
		s--;
	}
	_putchar(10);
}
