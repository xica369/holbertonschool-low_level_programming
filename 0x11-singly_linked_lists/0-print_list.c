#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *print_list - function that prints all the elements of a list_t list
 *
 *@h: pointer to
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cont = 0;

		for (; h != '\0'; h = h->next, cont++)
		{
			if (h->str == '\0')
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("%s\n", h->str);
			}
		}
	return (cont);
}
