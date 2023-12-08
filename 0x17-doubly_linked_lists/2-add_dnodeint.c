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
	else if (*head != NULL)
	{
		new_node->next = *head;
		new_node->prev = NULL;
		new_node->n = n;
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
