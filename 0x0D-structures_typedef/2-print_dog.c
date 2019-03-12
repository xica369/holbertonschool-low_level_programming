#include <stdio.h>
#include "dog.h"
/**
 *print_dog - print_dog
 *
 *@d: pointer with information about the dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: %p\n", d->name);
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if ((*d).owner == NULL)
		{
			printf("Owner: %p\n", d->owner);
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
