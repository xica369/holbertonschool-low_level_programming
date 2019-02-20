#include "holberton.h"
/**
 *puts2 - print only one character out of two, starting with the first one
 *
 *@str: pointer that has the string
 *
 *Return: zero
 */
void puts2(char *str)
{
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
	}
	for (y = 0; y < x; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar(10);
}
