#include <stdio.h>
#include "holberton.h"
/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 *@a: array with the numbero to sum
 *@size: size of the square matrix to calculate the diagonal
 *
 *Return: sum of number of diagonal
 */
void print_diagsums(int *a, int size)
{
	int cont, sum1 = 0, sum2 = 0;

	for (cont = 0; cont < size; cont++)
	{
		sum1 = sum1 + a[cont * (size + 1)];
		sum2 =  sum2 + a[(cont + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
