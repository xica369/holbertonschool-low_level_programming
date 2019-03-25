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
	int cont;
	for (cont = 0; head != '\0'; head = head->next, cont++)
	{
		free(head);
	}
}
