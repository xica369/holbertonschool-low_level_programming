#include "holberton.h"
/**
 *_isupper -  checks for uppercase character
 *
 *@c: variable int to checks if is uppercase character
 *
 *Return: zero
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
