#include "holberton.h"
/**
 *_strlen - returns the length of a string
 *
 *@s: pointer of the string
 *
 *Return: the length of a string
 */
int _strlen(char *s)
{
	int x = 1;
	int y = 0;

while (x != '\0')
{
	x = *(s + y);
	y++;
}
return (y);
}
