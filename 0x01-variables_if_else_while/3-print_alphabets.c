#include <stdio.h>
/**
 *main - print the alphabet in lowercase and uppercase
 *
 *Return: zero
 */
int main(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
putchar (n);
}
for (n = 'A'; n <= 'Z'; n++)
{
putchar (n);
}
putchar ('\n');
return (0);
}
