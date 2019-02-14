#include <stdio.h>
/**
 *main - print the sum of the number Fibonacci sequence
 *
 *Return: zero
 */
int main(void)
{
	long int x, y, z, a;

	x = 0;
	y = 1;
	do {
		z = x + y;
		x = y;
		y = z;
		if (y % 2 == 0)
		{
		a = a + y;
		}
	} while (z < 4000000);
	printf("%ld\n", a);
	return (0);
}
