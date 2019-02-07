#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Get last digit
 *
 *Return: zero
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, di;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */

di = n % 10;
if (di > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, di);
}
if (di == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, di);
}
if (di < 6 && di != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, di);
}
return (0);
}
