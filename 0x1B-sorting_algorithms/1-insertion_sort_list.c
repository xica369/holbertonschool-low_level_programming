#include "sort.h"

/**
 *connect - function that connect nodes from a list
 *@list: pointer to first element of the list;
 *@i: node to connect
 *@w: node previous where i will be connected
 */
void connect(listint_t **list, listint_t *i, listint_t *w)
{
	listint_t *wpre;

	wpre = w->prev;
	i->prev = wpre;
	i->next = w;
	w->prev = i;
	if (wpre != NULL)
		wpre->next = i;
	else
		*list = i;

}

/**
 *disconnect - function that disconnect a node
 *
 *@i: pointer to node to disconnect
 */
void disconnect(listint_t *i)
{
	listint_t *pre, *nex;

	pre = i->prev;
	nex = i->next;
	if (pre != NULL)
		pre->next = nex;
	if (nex != NULL)
		nex->prev = pre;
}

/**
 *insertion_sort_list - function that sort a list
 *
 *@list: head to list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *h, *aux;
	const listint_t *print;
	int flag = 0, i, j;

	if (list != NULL)
	{
		h = *list;
		if (h->next != NULL)
		{
			h = h->next;
			for (i = 0; h != NULL; h = h->next, i++)
			{
				aux = h;
				flag = 0;
				for (j = 0; aux != NULL && j < i; j++)
				{
					if (aux != NULL && aux->prev != NULL &&
					    aux->n < aux->prev->n)
					{
						disconnect(aux);
						connect(list, aux, aux->prev);
						print = *list;
						print_list(print);
						flag = 1;
					}
					if (flag == 0)
						break;
				}
			}
		}
	}
}
