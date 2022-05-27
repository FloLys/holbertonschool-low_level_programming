#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
* @key: key, cannot be empty
* @value: value associated with the key. must be duplicated, cant be empty
* Return: 1 if success, 0 if fail
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_element = NULL, *current_elem = NULL;

	if (value == NULL)
		return (0);

	current_elem = ht->array[index];

	while (current_elem != NULL)
	{
		/*founds collision*/
		if (strcmp(current_elem->key, key) == 0)
		{
			free(current_elem->value);
			/*duplicate value to exclude constant type to pass*/
			current_elem->value = strdup(value);
			return (1);
		}
		/*else, advance*/
		current_elem = current_elem->next;
	}
	/*else, insert*/
	new_element = calloc(1, sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);

	new_element->key = strdup(key);
	new_element->value = strdup(value);
	new_element->next = ht->array[index];
	ht->array[index] = new_element;

	return (1);
}
