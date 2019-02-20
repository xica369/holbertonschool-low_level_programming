#include "holberton.h"
/**
 *puts_half - prints half of a string
 *
 *@str: pointer to string
 *
 *Return: zero;
 */
void puts_half(char *str)
{
	int x, y, a;

	for (x = 0; str[x] != '\0'; x++)
	{
	}
	if (x % 2 != 0)
	{
		a = (x + 1) / 2;
	}
	else
	{
		a = x / 2;
	}
	for (y = a; y < x; y++)
	{
		{
			_putchar(str[y]);
		}
	}
	_putchar(10);
}
