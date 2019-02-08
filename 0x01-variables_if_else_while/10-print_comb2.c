#include <stdio.h>
/**
 *main - print numbers 00 to 99
 *
 *Return: zero
 */
int main(void)
{
	int n, i;

	for (n = 48; n < 58; n++)
	{
		for (i = 48; i < 58; i++)
		{
			putchar(n);
			putchar(i);
			if (n == 57 && i == 57)
			{
				n++;
				i++;
			}
			if (n < 58 && i < 58)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}
