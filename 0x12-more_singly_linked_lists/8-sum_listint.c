#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *sum_listint - sum of all elements of a linked list
 *@head: pointer to head node in list
 *
 *Return: sum of all the data or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != '\0'; head = head->next)
	{
		sum = sum + head->n;
	}
	return (sum);
}
