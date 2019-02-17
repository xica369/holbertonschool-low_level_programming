#include <stdio.h>
/**
 *main - print the sum of the number Fibonacci sequence
 *
 *Return: zero
 */
int main(void)
{
	int i;
	long int x, y, z, j;

	x = 0;
	y = 1;
	j = 0;
	for (i = 0; j < 4000000; i++)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0)
		{
			j = j + z;
		}
	}
	printf("%ld\n", j);
	return (0);
}
