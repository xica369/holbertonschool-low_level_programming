#include "holberton.h"
/**
 **_strcpy - copies the string pointed to by src to pointed dest
 *
 *@dest: aponter 2
 *@src: apointer 1
 *
 *Return: zero
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for(x = 0; src[x]; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = 0;
	return (dest);
}
