#include "holberton.h"
/**
 *more_numbers - prints 10 times the numbers from 0 to 10
 *
 *Return: zero
 */
void more_numbers(void)
{

	int x, y;

	for (y = 0; y < 10; y++)
	{
	for (x = 0; x < 15; x++)
	{
		if (x > 9)
		{
			_putchar(x / 10 + '0');
		}
		_putchar(x % 10 + '0');
	}
	_putchar(10);
	}
}
