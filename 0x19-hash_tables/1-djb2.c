#include "hash_tables.h"
/**
 *hash_djb2 - hash functions that distributes sets of keys and tables size
 *
 *@str: string to evalue
 *
 *Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
