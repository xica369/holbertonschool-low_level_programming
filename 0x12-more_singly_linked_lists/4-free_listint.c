#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *free_listint - function that frees a listint_t list
 *
 *@head: pointer to head element in list
 */
void free_listint(listint_t *head)
{
	listint_t *nodo;

	while (head != '\0')
	{
		nodo = head->next;
		free(head);
		head = nodo;
	}
}
