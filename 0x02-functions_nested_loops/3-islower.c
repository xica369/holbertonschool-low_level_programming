#include "holberton.h"
/**
 * _islower - pirnt 1 if is lowercase character
 *
 *@c: variable int
 *
 *Return: zero
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
