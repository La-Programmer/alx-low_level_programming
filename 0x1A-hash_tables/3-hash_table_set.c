#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table
 * @key: Key
 * @value: Value
 *
 * Return: 1 if SUCESS, 0 if FAILURE
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = create_element(key, value);
	const unsigned char *unsigned_key = (const unsigned char *) key;
	unsigned long int index = key_index(unsigned_key, ht->size);
	hash_node_t *c_item = ht->array[index];

	if (item == NULL)
		return (0);
	if (c_item == NULL)
	{
		item->next = ht->array[index];
		ht->array[index] = item;
	}
	else
	{
		item->next = c_item;
		ht->array[index] = item;
	}
	return (1);
}

/**
 * create_element - Creates a new hash table element
 * @key: Key value
 * @value: Value
 *
 * Return: The new element or NULL
 */
hash_node_t *create_element(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);
	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;
	return (new_node);
}
