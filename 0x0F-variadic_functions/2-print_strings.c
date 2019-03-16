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

	va_start(string, n);
	{
		for (cont = 0; cont < n - 1; cont++)
		{
			if (separator == NULL)
			{
				printf("%s ", va_arg(string, char*));
			}
			else
			{
printf("%s%s ", va_arg(string, char*), separator);
			}
		}
		printf("%s\n", va_arg(string, char*));
		va_end(string);
	}
}
