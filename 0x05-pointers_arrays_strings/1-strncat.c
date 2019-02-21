#include "holberton.h"
/**
 **_strncat - concatenates two strings and use at most n bytes from string src
 *
 *@dest: string new with add the string src
 *@src: string to add
 *
 *Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int cont1, cont2;

	for (cont1 = 0; dest[cont1]; cont1++)
	{
	}
	for (cont2 = 0; cont2 < n; cont2++)
	{
		dest[cont1 + cont2] = src[cont2];
	}
	/*dest[cont1 + cont2] = 0;*/
	return (dest);
}
