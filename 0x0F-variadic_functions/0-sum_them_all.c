#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - function that returns the sum of all its parameters
 *
 *@n: number of arguments
 *
 *Return: 0 if n is 0, else the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int cont;
	int s = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(sum, n);
	for (cont = 0; cont < n; cont++)
	{
		s = s + va_arg(sum, int);
	}
	va_end(sum);
	return (s);
}
