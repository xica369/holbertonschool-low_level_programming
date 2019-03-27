#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*delete_nodeint_at_index - deletes the node at index index of a linked list
*
*@head: pointer to head element in list
*index: index of the node that should be deleted
*
*Return: 1 if it succeeded else -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nodo, *aux, *sig;
	unsigned int cont;

	aux = *head;
	if (index == 0 && aux != NULL)
	{
		sig = aux->next;
		nodo = aux;
		free(nodo);
		*head = sig;
		return (1);
	}
	for (cont = 0; aux != NULL; aux = aux->next, cont++)
	{
		if (cont == index - 1)
		{
			sig = (aux->next)->next;
			nodo = aux->next;
			free(nodo);
			aux->next = sig;
			return (1);
		}
	}
	return (-1);
}
