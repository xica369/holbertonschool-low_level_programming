#include <stdio.h>
/**
 *main - imprint all possible different combinations of three digits
 *
 *Return: zero
 */
int main(void)
{
int x, y, z;

for (x = 48; x < 58; x++)
{
for (y = x + 1; y < 58; y++)
{
	for (z = y + 1; z < 58; z++)
	{
		putchar(x);
		putchar(y);
		putchar(z);
		if (x == 55 && y == 56 && z == 57)
		{
			x++;
			y++;
			z++;
		}
		if (x < 58 && y < 58 && z < 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
}
putchar('\n');
return (0);
}
