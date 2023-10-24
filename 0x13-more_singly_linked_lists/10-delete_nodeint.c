#include "lists.h"
#include <stdlib.h>
/**
* delete_nodeint_at_index - Deletes a node at an index
* @head: Pointer to a pointer to the beginning of the list
* @index: Index at which to delete node
* Return: 1 on Success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *current_node, *holder;

	if (*head == NULL)
		return (-1);

	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	while (counter != index - 1 && current_node != NULL)
	{
		current_node = current_node->next;
		counter++;
	}
	if (current_node->next == NULL || current_node == NULL)
		return (-1);
	holder = current_node->next;
	current_node->next = current_node->next->next;
	free(holder);
	return (1);
}
