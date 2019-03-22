#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *_strlen - returns the length of a string
 *
 *@s: pointer of the string
 *
 *Return: the length of a string
 */
int _strlen(char *s)
{
	unsigned int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
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

		nodo = malloc(sizeof(nodo));
		if (nodo == NULL)
		{
			free(nodo);
			return (NULL);
		}
		nodo->str = strdup(str);
		if (str == NULL)
		{
			free(nodo);
			return (NULL);
		}
		nodo->len = _strlen(nodo->str);
		nodo->next = *head;
		*head = nodo;
		return (*head);
}
