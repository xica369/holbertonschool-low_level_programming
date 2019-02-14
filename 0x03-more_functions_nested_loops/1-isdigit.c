#include "holberton.h"
/**
 *_isdigit - checks for a digit (0 through 9)
 *
 *@c: character to evaluate if it is digit
 *
 *Return: one if the character is a digit else return zero
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
