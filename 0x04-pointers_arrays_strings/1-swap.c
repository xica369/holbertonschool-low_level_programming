#include "holberton.h"
/**
 *swap_int - swaps the values of two numbers
 *
 *@a: pointer type int
 *@b: pointer type int
 *
 *Return: zero
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
