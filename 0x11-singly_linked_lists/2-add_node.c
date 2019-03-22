#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 **add_node - function that adds a new node at the end of a list_t list
 *
 *@head: address of the new nodo
 *@str: value to save in the nodo
 *
 *Return: a pointer with the address of new nodo
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nodo;
	unsigned int length = 0;

		nodo = malloc(sizeof(list_t));
		if (nodo == NULL)
		{
			free(nodo);
			return (NULL);
		}
		nodo->str = strdup(str);
		while (str[length])
		{
			length++;
		}
		nodo->len = length;
		nodo->next = *head;
		*head = nodo;
		return (*head);
}
