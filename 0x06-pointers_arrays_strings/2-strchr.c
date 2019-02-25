#include "holberton.h"
/**
 **_strchr - locates a character in a string like strchr
 *
 *@s: pointer with the string
 *@c: character to look
 *
 *Return: s or null if the character is not found
 */
char *_strchr(char *s, char c)
{
	int cont;

	for (cont = 0; s[0] != '\0'; cont++)
	{
		if (s[0] == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
