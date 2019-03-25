#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "lists.h"
/**
 **add_nodeint - adds a new node at he beginning of a list
 *
 *@head: pointer to head element in the list
 *@n: element to adds
 *
 *Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodo;

	nodo = malloc(sizeof(listint_t));
	if (nodo == NULL)
	{
		return (NULL);
		free(nodo);
	}
	nodo->n = n;
	nodo->next = *head;
	*head = nodo;
	return (*head);
}
