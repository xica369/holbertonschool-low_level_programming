#include "holberton.h"
/**
 *rev_string - reverses a string
 *
 *@s: pointer of string
 *
 *Return: zero
 */
void rev_string(char *s)
{
	int lenght, x, y, z;

	for (lenght = 0; s[lenght]; lenght++)
	{
		y = lenght;
	}
	for (x = 0; x < lenght / 2; x++)
	{
		z = s[x];
		s[x] = s[y];
		s[y] = z;
		y--;
	}
}
