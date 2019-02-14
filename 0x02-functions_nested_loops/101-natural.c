#include <stdio.h>
/**
 *main - print the numbers multiples of 3 or 5
 *
 *Return: zero
 */
int main(void)
{
	int x, y;

	for (x = 3; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{
			y = y + x;
		}
	}
	printf("%d\n", y);
	return (0);
}
