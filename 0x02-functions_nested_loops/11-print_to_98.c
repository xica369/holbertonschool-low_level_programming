#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - print the number until 98
 *
 *@n: varible int
 *
 *Return: zero
 */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
	}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
		if (x != 98)
		{
			printf(", ");
		}
		}
	}
	printf("\n");
}
