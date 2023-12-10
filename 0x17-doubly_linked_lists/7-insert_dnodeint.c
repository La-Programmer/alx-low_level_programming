#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a node at a given index
 * @h: Pointer to the pointer to the beginning of the list
 * @idx: Index to add the new node
 * @n: Data to be held by new node
 * Return: Address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);
	while (count != idx && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (idx > count)
		return (NULL);
	if (current->prev == NULL)
	{
		new_node->next = current;
		current->prev = new_node;
		new_node->prev = NULL;
		new_node->n = n;
		current = new_node;
	}
	else if (current->next == NULL)
	{
		new_node->next = NULL;
		new_node->prev = current;
		current->next = new_node;
		new_node->n = n;
		current = new_node;
	}
	else
	{
		new_node->next = current;
		new_node->prev = current->prev;
		current->prev->next = new_node;
		current->prev = new_node;
		new_node->n = n;
		current = new_node;
	}
	return (new_node);
}
