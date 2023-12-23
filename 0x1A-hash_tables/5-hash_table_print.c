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

	if (ht == NULL)
		return;
	putchar('{');
	while (index < (ht->size))
	{
		if (ht->array[index] != NULL)
		{
			if (printed)
				printf(", ");
			print_list(ht->array[index]);
			printed = 1;
		}
		index++;
	}
	printf("}\n");
}
/**
 * print_list - Prints a linked list
 * @head: Pointer to the beginning of the list
 *
 * Return: Nothing
 */
void print_list(hash_node_t *head)
{
	int printed = 0;
	hash_node_t *current;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		if (printed)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		printed = 1;
		current = current->next;
	}
}
