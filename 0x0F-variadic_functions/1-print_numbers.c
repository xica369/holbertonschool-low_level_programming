#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - function that prints numbers, followed by a new line
 *
 *@separator: separator between numbers
 *@n:number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int cont;

	va_start(print, n);
	if (n != 0)
	{
		for (cont = 0; cont < n - 1; cont++)
		{
			if (separator == NULL)
			{
				printf("%d", va_arg(print, int));
			}
			else
			{
				printf("%d%s", va_arg(print, int), separator);
			}
		}
		printf("%d", va_arg(print, int));
	}
	printf("\n");
	va_end(print);
}
