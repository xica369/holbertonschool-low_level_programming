#include "holberton.h"
/**
 **string_toupper - changes all lowercase letters of a string to uppercase
 *
 *@s: string to changes to uppercase
 *
 *Return: string change
 */
char *string_toupper(char *s)
{
	int cont;

	for (cont = 0; s[cont]; cont++)
	{
		if (s[cont] >= 97 && s[cont] <= 122)
		{
			s[cont] = s[cont] - 32;
		}
	}
	return (s);
}
