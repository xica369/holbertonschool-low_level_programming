#include <stdio.h>
/**
 *main - print the sum of the number Fibonacci sequence
 *
 *Return: zero
 */
int main(void)
{
	int i;
	long int x, y, z, a;

	x = 0;
	y = 1;
	for (i = 0; i < 34; i++)
	{
		z = x + y;
		x = y;
		y = z;
		a = a + z;
	}
	printf("%ld\n", a);
	return (0);
}
