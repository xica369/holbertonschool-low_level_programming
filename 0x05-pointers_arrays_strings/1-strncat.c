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
	int cont1, cont2, cont3;

	for (cont1 = 0; dest[cont1]; cont1++)
	{
	}
	for (cont2 = 0; dest[cont2]; cont2++)
	{
	}
	if (n > cont2)
	{
		n = cont2;
	}
	for (cont3 = 0; cont3 < n; cont3++)
	{
		dest[cont1 + cont3] = src[cont3];
	}
	/*dest[cont1 + cont2] = 0;*/
	return (dest);
}
