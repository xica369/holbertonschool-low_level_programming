#include "lists.h"
/**
 *dlistint_len - returns the number of elements in a linked dlistint_t list
 *
 *@h: pointer to first element of list
 *
 *Return: the number of elements in a linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
