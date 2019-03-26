#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *free_listint2 -  frees a listint_t list.
 *
 *@head: pointer to head element in list
 */
void free_listint2(listint_t **head)
{
	listint_t *nodo;

	if (*head != NULL)
	{
		nodo = *head;
		while (nodo != NULL)
		{
			free(nodo);
			nodo = nodo->next;
		}
		*head = NULL;
	}
}
