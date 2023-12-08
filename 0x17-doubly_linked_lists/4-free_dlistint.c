#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Frees a list
 * @head: Pointer to the beginning of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
