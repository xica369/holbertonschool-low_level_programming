#include "hash_tables.h"
/**
 *hash_table_set - function that adds an element to the hash table
 *
 *@ht: hash table you want to add or update the key/value
 *@key: pointer to key
 *@value: value associated with the key
 *
 *Return: 1 if it succeded else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *head;
	unsigned long int index;
	const char *e = "";

	if (ht == NULL || key == NULL || key == e || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	head = ht->array[index];
	for (; head != NULL; head = head->next)
	{
		if (strcmp(key, head->key) == 0)
		{
			head->value = strdup(value);
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	if (ht->array[index] == NULL)
	{
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = ht->array[index + 1];
		ht->array[index] = new;
		return (1);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
