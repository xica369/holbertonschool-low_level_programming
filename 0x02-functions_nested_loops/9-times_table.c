#include "holberton.h"
/**
 *times_table - print multiplication tables
 *
 *Return: zero
 */
void times_table(void)
{
	int x, y, a, b;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			a = (x * y) / 10;
			b = (x * y) % 10;
			if (x == 0 && y > 0)
			{
				_putchar(' ');
			}
			if (a == 0 && b == 0)
			{
				_putchar('0');
			}
			if (a  == 0 && b > 0)
			{
				_putchar(' ');
				_putchar(b + '0');
			}
			if (a >= 1 && b >= 0)
			{
				_putchar(a + '0');
				_putchar(b + '0');
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
