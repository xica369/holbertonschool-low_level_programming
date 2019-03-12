#include <stdio.h>
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
	int cont;
	char *s;

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
		return (NULL);
	}
	for (cont = 0; str[cont]; cont++)
	{
		s[cont] = str[cont];
	}
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
	char *s1, *s2;

	s1 = _strdup(name);
	s2 = _strdup(owner);

	struc dog *newD;
	new = malloc(sizeof(struct dog));
	if (newD == NULL)
	{
		return (NULL);
	}
	s1->name = name;
	age->age = age;
	s2->owner = owner;
	return (newD);
}
