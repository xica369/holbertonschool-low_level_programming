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
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
