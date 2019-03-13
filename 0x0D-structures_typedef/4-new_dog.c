#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 **_strdup -  copy of the string and returns a pointer with its newly allocated
 *
 *@str: pointer to string to copy
 *
 *Return: NULL if str = NULL or insufficient memory else a pointer
 */
char *_strdup(char *str)
{
	char *s;
	int cont;

	if (str == NULL)
	{
		return (NULL);
	}
	for (cont = 0; str[cont]; cont++)
	{
	}
	s = malloc(sizeof(*s) * cont + 1);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (cont = 0; str[cont]; cont++)
	{
		s[cont] = str[cont];
	}
	s[cont] = 0;
	return (s);
}
/**
 **new_dog - function that creates a new dog
 *
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of owner of the dog
 *
 *Return: NULL if malloc fails or a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newD;

	newD = malloc(sizeof(dog_t));
	if (newD == NULL)
	{
		free(newD);
		return (NULL);
	}
	newD->name = _strdup(name);
	if (newD->name == NULL)
	{
		free(newD);
		return (NULL);
	}
	newD->owner = _strdup(owner);
	if (newD->owner == NULL)
	{
		free(newD->name);
		free(newD);
		return (NULL);
	}
	newD->age = age;
	return (newD);
}
