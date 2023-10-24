#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - Adds a node to the end of a list
* @head: A pointer to a pointer to the beginning of the list
* @n: The integer value to be stored in the new node
* Return: Address of the new node or NULL if failure
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
