#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table to look into
* @key: key to search
* Return: value associated with the element, NULL if key wasnt found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (!ht || !key)
		return (NULL);

	/*loop to find an empty entry*/
	while (ht->array[index] != NULL)
	{
		/*found key, return value*/
		if (strcmp(key, ht->array[index]->key) == 0)
			return (ht->array[index]->value);
		/*else, advance*/
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
