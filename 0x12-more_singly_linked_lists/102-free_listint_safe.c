#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *  free_listint_safe -  frees a listint_t list.
 *
 *@h: pointer to head element in list
 *
 *Return:  the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t one = 0;
	listint_t *first;

	first = *h;
	*h = first;

	return (one);
}
