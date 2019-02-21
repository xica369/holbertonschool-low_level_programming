#include "holberton.h"
/**
 **_strcat - concatenates two strings
 *
 *@dest: string 1
 *@src: string 2
 *
 *Return: string with string 1 and 2
 */
char *_strcat(char *dest, char *src)
{
	int cont1, cont2;

	for (cont1 = 0; dest[cont1]; cont1++)
	{
	}
	for (cont2 = 0; src[cont2]; cont2++)
	{
		dest[cont1 + cont2] = src[cont2];
	}
	dest[cont1 + cont2] = 0;
	return (dest);
}
