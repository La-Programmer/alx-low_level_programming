#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: Pointer to pointer to the head of the list
 * @n: Data to be stored in the new node
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		new_node->prev = current;
		current->next = new_node;
	}
	return (new_node);
}
