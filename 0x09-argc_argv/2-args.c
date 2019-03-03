#include <stdio.h>
/**
 *main - prints all arguments it receives
 *
 *@argc: number to arguments
 *@argv: pointer of array with aguments
 *
 *Return: the arguments
 */
int main(int argc, char *argv[])
{
	int cont;

	for (cont = 0; cont < argc; cont++)
	{
		printf("%s\n", argv[cont]);
	}
	return (0);
}
