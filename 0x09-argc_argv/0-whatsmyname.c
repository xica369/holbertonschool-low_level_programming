#include <stdio.h>
/**
 *main - program that prints its name, followed by a new line
 *
 *@argc: shows the function's name
 *@argv: array with arguments
 *
 *Return: the function's name
*/
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
