#include "holberton.h"
/**
 *print_alphabet - print lowercase alphabet with _putchar
 *
 *Return: zero
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
