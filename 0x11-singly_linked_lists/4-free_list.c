#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *free_list - frees a list
 *
 *@head: pointer to element to free
 */
void free_list(list_t *head)
{
	list_t *nodo;

	while (head != '\0')
	{
		nodo = head->next;
		free(head);
		head = nodo;
	}
}
