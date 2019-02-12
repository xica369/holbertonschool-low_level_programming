#include "holberton.h"
/**
 *_isalpha - return 1 if is a letter (lowercase or uppercase) else return 0
 *
 *@c: variable int
 *
 *Return: zero or one
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
