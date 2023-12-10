#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a specified node from a list
 * @head: Pointer to the pointer to the beginning of the list
 * @index: Index of node to delete
 * Return: 1 if success -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);

	while (count != index && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);
	else if (index == 0)
	{
		if (current->next != NULL)
			(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	else if (current->next == NULL)
	{
		(current->prev)->next = NULL;
		free(current);
		return (1);
	}
	else
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
		free(current);
		return (1);
	}
}
