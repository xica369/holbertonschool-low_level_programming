#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *  print_listint_safe -  frees a listint_t list.
 *
 *@head: pointer to head element in list
 *
 *Return:  the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t one = 0;
	const listint_t *first;

	first = head;
	head = first;

	return (one);
}
