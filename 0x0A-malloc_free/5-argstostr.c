#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **argstostr - function that concatenates all the arguments of your program
 *
 *@ac: number of arguments
 *@av: pointer to arguments
 *
 *Return: pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int cont1, cont2, lenght = 0, i = 0;
	char *new;

	if (ac == 0)
	{
		return (NULL);
	}
	for (cont1 = 0; cont1 < ac; cont1++)
	{
		if (av[cont1] == NULL)
		{
			return (NULL);
		}
		for (cont2 = 0; av[cont1][cont2]; cont2++)
		{
			lenght++;
		}
	}
	new = malloc(sizeof(char) * (lenght + ac + 1));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (cont1 = 0; cont1 < ac; cont1++)
	{
		for (cont2 = 0; av[cont1][cont2]; cont2++)
		{
			new[i] = av[cont1][cont2];
			i++;
		}
		new[i] = '\n';
		i++;
	}
	return (new);
}
