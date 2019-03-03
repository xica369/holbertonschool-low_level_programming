#include <stdio.h>
/**
 *main - prints the number of arguments passed into it
 *
 *@argc: number the argluments of argv
 *@argv: array with arguments to cont
 *
 *Return: the numbers of argments
 */
int main(int argc, char *argv[])
{
	int cont;

	for (cont = 0; cont < argc; cont++)
	{
	}
	printf("%d\n", cont - 1);
	(void)argv;
	return (0);
}
