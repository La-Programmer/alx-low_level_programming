#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Adds a node to the beginning of a doubly linked list
 * @head: Pointer to the pointer to the first node of the list
 * @n: Data for the new node
 * Return: Address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
