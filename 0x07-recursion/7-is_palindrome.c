#include <stdio.h>
#include "holberton.h"
int compare(char *s, int len, int i);
/**
 *compare - say if a string is a palindrome
 *
 *@len: variable that star in the lenght of string
 *@i: variable that start in 0
 *@s: string to evalue
 *
 *Return: 1 if the string is a palindrome else 0
 */
int compare(char *s, int len, int i)
{
	if (s[i] != s[len])
	{
		return (0);
	}
	if (len >= i && s[i] == s[len])
	{
		return (compare(s, len - 1, i + 1));

	}
	return (1);
}
/**
 *is_palindrome - say if a string is a palindrome
 *
 *@s: string to evalue
 *
 *Return: 1 if the string is a palindrome else 0
 */
int is_palindrome(char *s)
{
	int len = 0, i = 0;

	while (s[len])
	{
		len++;
	}
	len--;
	return (compare(s, len, i));
}
