#include "holberton.h"
/**
 **_strpbrk - searches a string for any of a set of bytes
 *
 *@s: string
 *@accept: string to comparice
 *
 *Return: s or null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int cont1, cont2;

	for (cont1 = 0; s[cont1]; cont1++)
	{
		for (cont2 = 0; accept[cont2]; cont2++)
		{
			if (s[cont1] == accept[cont2])
				return (s + cont1);
		}
	}
	return ('\0');
}
