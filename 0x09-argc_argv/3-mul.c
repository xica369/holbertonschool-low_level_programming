#include <stdio.h>
#include "stdlib.h"
/**
 *main - program that multiplies two numbers
 *
 *@argc: number to arguments
 *@argv: array with arguments
 *
 *Return: multiplication of two number or -1 if there are not two numbers
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		num1 = num1 * num2;
		printf("%d\n", num1);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
