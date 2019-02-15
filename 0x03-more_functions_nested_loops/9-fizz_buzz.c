#include <stdio.h>
/**
*main - print the fizz-buzz test
*
*Return: zero
*/
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz");
		}
		if (x % 5 == 0 && x % 3 != 0)
		{
			printf("Buzz");
		}
		if (x % 3 != 0 && x % 5 != 0)
		{
			printf("%d", x);
		}
		if (x != 100)
		{
		putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
