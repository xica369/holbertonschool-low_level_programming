#include <stdio.h>
/**
 *main - print alphabetic within e and q
 *
 *Return: zero
 */
int main(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
if (n == 'e' || n == 'q')
{
n++;
}
putchar (n);
}
putchar ('\n');
return (0);
}
