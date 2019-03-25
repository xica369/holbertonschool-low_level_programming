#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 **add_nodeint_end - adds a new node at the end of a list
 *
 *@head: pointer to head element in the list
 *@n: new element to add
 *
 *Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodo;
	listint_t *temp;

	nodo = malloc(sizeof(listint_t));
	if (nodo == NULL)
	{
		free(nodo);
		return (NULL);
	}
	nodo->n = n;
	nodo->next = NULL;
	if (*head == NULL)
	{
		*head = nodo;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nodo;
	}
	return (*head);		
}
