#include "holberton.h"
/**
 *_strlen - returns the length of a string
 *
 *@s: pointer of the string
 *
 *Return: zero
 */
int _strlen(char *s)
{
	int x = 1, y = 1;

while (x != '\0')
{
	x = *(s + y);
	y++;
}
return (y - 1);
}
