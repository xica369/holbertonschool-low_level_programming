#include "holberton.h"
/**
 **_memcpy -  copies n bytes from memory area src to memory area dest
 *
 *@dest: pointer that save n bytes form memory area src
 *@src: pointer that have the byetes to copy to memory area dest
 *@n: number of bytes to copy
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; src[count]; count++)
	{
	}
	if (n > count)
	{
		n = count;
	}
	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
