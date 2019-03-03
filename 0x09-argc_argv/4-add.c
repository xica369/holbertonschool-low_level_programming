#include <stdio.h>
#include <ctype.h>
#include "stdlib.h"
/**
 *main - adds positive numbers
 *
 *@argc: the numbers of arguments
 *@argv: the array with the arguments
 *
 *Return: 0 or 1 if the arguments are not numbers
 */
int main(int argc, char *argv[])
{
	int cont, add = 0, aux = 0;

	for (cont = 1; cont < argc; cont++)
	{
		for (aux = 0; argv[cont][aux]; aux++)
		{
			if (isdigit(argv[cont][aux]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		if (isdigit(*argv[cont]) != 0)
		{
			add = add + atoi(argv[cont]);
		}
	}
	printf("%d\n", add);
	return (0);
}
