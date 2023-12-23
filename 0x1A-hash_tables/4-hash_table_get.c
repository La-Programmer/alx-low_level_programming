#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - Gets a the value of a key from the hash table
 * @ht: Hash table
 * @key: Key
 *
 * Return: Value of matching key (SUCCESS) or NULL (FAILURE)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const unsigned char *key2 = (const unsigned char *) key;
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL)
		return (NULL);
	index = key_index(key2, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (!strcmp(current->key, key))
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
