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
	hash_table_t *table = malloc(sizeof(hash_table_t) * size);

	if (table == NULL)
		return (NULL);
	return (table);
}
