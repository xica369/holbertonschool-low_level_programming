#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *listint_len - return the number of elements in a linked list
 *
 *@h: pointer to the head element in the linked list
 *
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	while (h != '\0')
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
