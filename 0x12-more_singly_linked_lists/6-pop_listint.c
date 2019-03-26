#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *pop_listint - deletes the head node of a list
 *
 *@head: pointer to head element in list
 *
 *Return: 0 if the list is empty else the head data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

        if (*head == NULL)
        {
                return (0);
        }
	else
	{
		temp = *head;
		n = temp->n;
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	return (n);
}
