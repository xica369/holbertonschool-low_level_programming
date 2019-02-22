#include "holberton.h"
/**
 *reverse_array - reverses the content of an array of integers
 *
 *@a: string to reverse the content
 *@n: number of elemntes of a
 *
 *Return: zero
 */
void reverse_array(int *a, int n)
{
	int x, y, z;

	y = n - 1;
	for (x = 0; x < n / 2; x++)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
		y--;
	}
}
