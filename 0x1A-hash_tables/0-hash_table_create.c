#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: Size of the hash table
 * Return: Pointer to hash table or NULL if failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int count = 0;

	if (table == NULL)
		return (NULL);
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	table->size = size;
	while (count < size)
	{
		table->array[count] = NULL;
		count++;
	}
	return (table);
}
