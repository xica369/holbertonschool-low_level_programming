#include "holberton.h"
/**
 **_strncpy - copies a string to other string until n
 *
 *@dest: string that saves other string
 *@src: string to copy
 *@n: number the characters to copy
 *
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cont1;

	for (cont1 = 0; cont1 < n; cont1++)
	{
		dest[cont1] = src[cont1];
	}
	return (dest);
}
