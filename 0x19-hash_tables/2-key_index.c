#include "hash_tables.h"
/**
 *key_index - function that gives you the index of a key
 *
 *@key: pointer to the value of the key
 *@size: length of the array of the hash table
 *
 *Return: index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		exit(1);

	if (size == 0)
		exit(1);

	return (hash_djb2(key) % size);
}
