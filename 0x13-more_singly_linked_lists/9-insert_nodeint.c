#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - Inserts a new node at a given position
* @head: A pointer to a pointer to the beginning of the list
* @idx: Index at which to insert new node
* @n: Integer value to be stored in the new node
* Return: Address of the new node or NULL if failure
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current_node;

	if (*head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (counter != idx - 1)
	{
		current_node = current_node->next;
		counter++;
	}
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
