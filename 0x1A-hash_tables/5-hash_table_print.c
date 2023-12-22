#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table to print
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int printed = 0;

	putchar('{');
	while (index < (ht->size))
	{
		if (ht->array[index] != NULL)
		{
			if (printed)
				putchar(',');
			printf(" '%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			printed = 1;
		}
		index++;
	}
	printf("}\n");
}
