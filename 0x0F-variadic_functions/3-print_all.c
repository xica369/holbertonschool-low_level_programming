#include <stdio.h>
#include <stdarg.h>
/**
 *print_all -  function that prints anything
 *
 *@format: list of types of parameters
 */
void print_all(const char * const format, ...)
{
	va_list print;
	char *t;
	int cont = 0;

	va_start(print, format);
	while (format && format[cont])
	{
		switch (format[cont])
			{
			case 'c':
				printf("%c", va_arg(print, int));
				break;
			case 'i':
				printf("%i", va_arg(print, int));
				break;
			case 'f':
				printf("%f", va_arg(print, double));
				break;
			case 's':
				t = va_arg(print, char *);
				if (t != NULL)
				{
					printf("%s", t);
					break;
				}
				printf("%p", t);
				break;
			default:
				cont++;
				continue;
			}
			if (format[cont + 1] != '\0')
				printf(", ");
			cont++;
	}
	printf("\n");
	va_end(print);
}
