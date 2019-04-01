#include "holberton.h"
int prime(int n, int x);
/**
 *prime - say if a number is prime or no
 *
 *@n: number to evalue
 *@x: aux to evalue the number
 *
 *Return: 1 if the number is prime else 0
 */
int prime(int n, int x)
{

	if (n % x == 0)
	{
		return (0);
	}
	if (n / x != 0 && x < n / 2)
	{
		return (prime(n, x + 1));
	}
	else
		return (1);
}
/**
 *is_prime_number - say if a number is prime or no
 *
 *@n: number to evalue
 *
 *Return: 1 if the number is prime else 0
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n == 1 || n == -1)
	{
		return (0);
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
		}
		return (prime(n, x));
	}
}
