#include <stdio.h>
/**
 *main - prints the largest prime factor of the number 612852475143
 *
 *Return: zero
 */
int main(void)
{
	long int x, b;

	b = 612852475143;
	for (x = 2; x <= b; x++)
	{
		if (b % x == 0)
		{
			b = b / x;
			x = x - 1;
		}
		if (b == 1)
		{
			printf("%ld\n", x);
			break;
		}
	}
	return (0);
}
