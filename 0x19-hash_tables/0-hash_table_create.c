#include "hash_tables.h"
/**
 *hash_table_create - function that creates a hash table
 *
 *@size: size of the array
 *
 *Return: a pointer to the newly created hash table else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HashTable;
	hash_node_t **array;

	if (size == 0)
		return (NULL);


	HashTable = malloc(sizeof(hash_table_t));
	if (HashTable == NULL)
		return (NULL);

	HashTable->size = size;

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	HashTable->array = array;
	return (HashTable);
}
