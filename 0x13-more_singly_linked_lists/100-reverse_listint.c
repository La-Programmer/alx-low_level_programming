#include "lists.h"
#include <stdlib.h>
/**
* reverse_listint - Reverses a list
* @head: Pointer to a pointer to the beginning of the list
* Return: Address to the beginning of the new list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *current;

	if (head == NULL)
		return (NULL);
	else if (*head == NULL)
		return (NULL);

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
