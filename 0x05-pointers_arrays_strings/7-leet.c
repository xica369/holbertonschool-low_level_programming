#include "holberton.h"
/**
 **leet - encodes a string into 1337
 *
 *@s: string to encodes
 *
 *Return: codified string
 */
char *leet(char *s)
{
	int cont1, cont2;
	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (cont1 = 0; s[cont1]; cont1++)
	{
		for (cont2 = 0; x[cont2]; cont2++)
		{
			if (s[cont1] == x[cont2])
			{
				s[cont1] = y[cont2];
				break;
			}
		}
	}
	return (s);
}
