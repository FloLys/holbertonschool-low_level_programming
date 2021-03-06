#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: size of the array
* Return: a pointer to the new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	ht->size = size;
	ht->array = calloc(ht->size, sizeof(hash_node_t *));

	if (ht->array == NULL)
		return (NULL);

	return (ht);
}
