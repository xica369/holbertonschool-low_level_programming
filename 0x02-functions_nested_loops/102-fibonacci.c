#include <stdio.h>
/**
 *main - print the first 50 Fibonacci numbers
 *
 *Return: zero
 */
int main(void)
{
	int i;
	long int x, y, z;

	x = 0;
	y = 1;
	for (i = 0; i <= 47; i++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%ld", z);
		if (i < 48)
		{
			printf(", ");
		}
	}
	putchar(10);
	return (0);
}
