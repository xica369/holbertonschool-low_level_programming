#include <stdio.h>
#include <ctype.h>
#include "stdlib.h"
/**
 *main - prints minimum number of coins to make change for an amount of money
 *
 *@argc: the numbers of arguments
 *@argv: the array with the arguments
 *
 *Return: 0 or 1 if the arguments are not numbers
 */
int main(int argc, char *argv[])
{
	int cont, num, aux = 0;
	int set[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
		num = atoi(argv[1]);
		if (num < 0)
		{
			printf("0\n");
			return (1);
		}
		for (cont = 0; set[cont]; cont++)
		{
		if (num >= set[cont])
		{
			aux = aux + (num / set[cont]);
			num = num % set[cont];
		}
		if (num == 0)
		{
			break;
		}
	}
		printf("%d\n", aux);
		return (0);
}
