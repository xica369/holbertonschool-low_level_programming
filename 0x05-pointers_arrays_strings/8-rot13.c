#include "holberton.h"
/**
 **rot13 - function that encodes a string using rot13
 *
 *@s: string to encodes
 *
 *Return: codified string
 */
char *rot13(char *s)
{
	int cont1, cont2;
	char *x = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *y = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (cont1 = 0; s[cont1]; cont1++)
	{
		for (cont2 = 0; x[cont2]; cont2++)
		{
			if (s[cont1] == x[cont2])
			{
				s[cont1] = y[cont2];
			}
		}
	}
	return (s);
}
