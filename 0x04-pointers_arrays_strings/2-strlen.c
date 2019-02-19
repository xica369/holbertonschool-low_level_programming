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
	int length = 0;

while (*s != '\0')
{
	s++;
	length++;
}
return (length);
}
