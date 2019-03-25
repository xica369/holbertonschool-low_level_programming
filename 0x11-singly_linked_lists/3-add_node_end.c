#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 **add_node_end - adds a new node at the end of a list
 *
 *@head: pointer to last element of list
 *@str: new element to add
 *
 *Return: address of the new element or Null if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *nodo;
	list_t *temp;

		nodo = malloc(sizeof(list_t));
		if (nodo == NULL)
		{
			free(nodo);
			return(NULL);
		}
		nodo->str = strdup(str);
		while (str[i])
		{
			i++;
		}
		nodo->len = i;
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
