#include "holberton.h"
/**
 *_isupper - checks for uppercase character
 *
 *@c: variable int to checks if is uppercase character
 *
 *Return: one if is uppercase else zero
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
