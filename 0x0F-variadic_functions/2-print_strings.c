#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - function that prints strings, followed by a new line
 *
 *@separator: separator to be printed between the strings
 *@n: number to arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int cont;
	char *a;

	va_start(string, n);
	for (cont = 0; cont < n; cont++)
	{
		a = va_arg(string, char*);
		if (a != NULL)
		{
			printf("%s", a);
		}
		else
		{
			printf("%p", a);
		}
		if (separator != NULL && cont < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}
