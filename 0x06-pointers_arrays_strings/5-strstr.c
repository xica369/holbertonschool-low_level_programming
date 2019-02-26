#include "holberton.h"
/**
 **_strstr - function that locates a substring, similar to strstr
 *
 *@haystack: string where look needle
 *@needle: string to look in haystack
 *
 *Return: haystack since the posicion is needle or null
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y, z = 1;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (x = 0; haystack[x]; x++)
	{
		if (haystack[x] == needle[0])
		{
			for (y = 1; needle[y]; y++)
			{
				if (haystack[x + y] == needle[y])
				{
					z++;
				}
			}
		}
		if (y == z)
		{
			return (haystack + x);
		}
		z = 1;
	}
	return ('\0');
}
