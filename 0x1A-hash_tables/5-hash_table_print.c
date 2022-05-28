#include "hash_tables.h"
/**
* hash_table_print - prints the keys and values of the hash table
* @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *aux;
	char *format = "";

	if (!ht)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		aux = ht->array[index];
		while (aux != NULL)
		{
			printf("%s'%s': '%s'", format, aux->key, aux->value);
			format = ", ";
			aux = aux->next;
		}
	}
	printf("}\n");
}
