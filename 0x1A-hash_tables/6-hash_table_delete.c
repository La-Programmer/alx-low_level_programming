#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - Deletes and frees a hash table
 * @ht: Hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;
	while (index < ht->size)
	{
		current = ht->array[index];
		if (current != NULL)
			free_list(current);
		else
			free(current);
		index++;
	}
	free(ht);
}

/**
 * free_list - Frees a linked list
 * @head: Current node
 *
 * Return: Nothing
 */
void free_list(hash_node_t *head)
{
	hash_node_t *current = head;
	hash_node_t *next;

	while (current != NULL)
	{
		next = current->next;
		if (current->key != NULL)
			free(current->key);
		if (current->value != NULL)
			free(current->value);
		free(current);
		current = next;
	}
}
