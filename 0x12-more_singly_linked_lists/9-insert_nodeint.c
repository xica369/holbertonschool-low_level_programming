#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 **insert_nodeint_at_index - inserts a new node at a given position
 *
 *@head: pointer to head nodo to list
 *@idx: index of the list where the new node should be added
 *@n: element to save in n
 *
 *Return: address of the new node or null if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodo, *aux, *sig;
	unsigned int iter = 0;

	nodo = malloc(sizeof(listint_t));
	if (nodo == NULL)
	{
		free(nodo);
		return (NULL);
	}
	nodo->n = n;
	if (idx == 0)
	{
		nodo->next = *head;
		*head = nodo;
		return (*head);
	}
	aux = *head;
	for (; aux != NULL; aux = aux->next)
	{
		if (iter == idx - 1)
		{
			sig = aux->next;
			aux->next = nodo;
			nodo->next = sig;
			return (nodo);
		}
		iter++;
	}
	return (NULL);
}
