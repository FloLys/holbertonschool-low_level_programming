#include "hash_tables.h"

/**
* hash_table_delete - delete and free a hash table
* @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	size_t index = 0;
	hash_node_t *aux = NULL;

	if (!ht)
		return;

	while (index < ht->size)
	{
		while (ht->array[index])
		{
			aux = ht->array[index];
			ht->array[index] = ht->array[index]->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
