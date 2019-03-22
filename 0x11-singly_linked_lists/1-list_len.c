#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *list_len - returns the number of elements in a linked list_t list
 *
 *@h: pointer to struct
 *
 *Return: numbero of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h != '\0')
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
