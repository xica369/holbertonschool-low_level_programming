#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring - similary strspn
 *
 *@s: pontier of string
 *@accept: string with the character to look
 *
 *Return: the number of charcters of accept coincide in s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int cont1, cont2, aux, lenght = 0;

	for (cont1 = 0; s[cont1]; s++)
	{
		aux = lenght;
		for (cont2 = 0; accept[cont2]; cont2++)
		{
			if (s[cont1] == accept[cont2])
			{
				lenght++;
			}
		}
		if (aux == lenght)
		{
			return (lenght);
		}
	}
	return (lenght);
}
