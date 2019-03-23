#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *nodo;
	list_t *temp;

	if (*head == NULL)

	temp = *head;
	for (; temp != NULL; temp = temp->next)
        {
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
		nodo->next = *head;
	}
	*head = nodo;
	return (*head);
}
