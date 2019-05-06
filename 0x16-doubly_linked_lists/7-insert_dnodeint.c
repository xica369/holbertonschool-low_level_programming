#include "lists.h"
/**
 **insert_dnodeint_at_index - inserts a new node at a given position
 *
 *@h: pointer to head nodo to list
 *@idx: index of the list where the new node should be added
 *@n: element to save in n
 *
 *Return: address of the new node or null if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nodo, *aux, *sig;
	unsigned int iter = 0;

	nodo = malloc(sizeof(dlistint_t));
	if (nodo == NULL)
	{
		free(nodo);
		return (NULL);
	}
	nodo->n = n;
	if (idx == 0)
	{
		nodo->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = nodo;
		}
		*h = nodo;
		nodo->prev = NULL;
		return (*h);
	}
	aux = *h;
	for (; aux != NULL; aux = aux->next)
	{
		if (iter == idx - 1)
		{
			sig = aux->next;
			aux->next = nodo;
			nodo->next = sig;
			sig->prev = nodo;
			nodo->prev = aux;
			return (nodo);
		}
		iter++;
	}
	return (NULL);
}
