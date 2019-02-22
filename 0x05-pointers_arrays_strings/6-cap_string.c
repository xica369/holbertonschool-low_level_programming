#include "holberton.h"
/**
 **cap_string - capitalizes all words of a string
 *
 *@s: string to capitalizes the words
 *
 *Return: s
 */
char *cap_string(char *s)
{
	int cont1, cont2;
	char x[] = " \t\n,;.!?\"(){}";

	for (cont1 = 0; s[cont1]; cont1++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		for (cont2 = 0; x[cont2]; cont2++)
		{
			if (s[cont1 - 1] == x[cont2])
			{
				if (s[cont1] >= 97 && s[cont1] <= 122)
				{
					s[cont1] = s[cont1] - 32;
				}
			}
		}
	}
	return (s);
}
