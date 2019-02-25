#include "holberton.h"
/**
 **_memset - fills memory with a constant
 *
 *@s: pointer to array b
 *@b: constant  to copy n times
 *@n: time to copy b in array
 *
 *Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
