#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *print_listint - function that prints all the elements of a list
 *
 *@h: pointer to head element of list
 *
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	for (; h != NULL; h = h->next, cont++)
	{
		printf("%d\n", h->n);
	}
	return (cont);
}
