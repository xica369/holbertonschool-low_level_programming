#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that prints the opcodes of its own main function
 *
 *@argc: number of arguments
 *@argv: array with the arguments
 *
 *Return: 0
 */
int main(int argc, char **argv)
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
}
