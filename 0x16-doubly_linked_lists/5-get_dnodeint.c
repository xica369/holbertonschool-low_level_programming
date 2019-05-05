#include "lists.h"
/**
 **get_dnodeint_at_index - returns the nth node of a linked list
 *
 *@head: pointer to head element in linked list
 *@index: nth node of element to return
 *
 *Return: nodo or null if it not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nodo;
	unsigned int cont = 0;

	nodo = head;
	while (nodo != NULL)
	{
		if (index == cont)
		{
			return (head);
		}
		nodo = nodo->next;
		head = nodo;
		cont++;
	}
	return (NULL);
}
