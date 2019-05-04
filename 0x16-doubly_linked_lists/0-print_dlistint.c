#include "lists.h"
/**
 *print_dlistint - prints all the elements of a dlistint_t list
 *
 *@h: pointer to first element of list
 *
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; h = h->next, i++)
	{
		printf("%d\n", h->n);
	}
	return (i);
}
