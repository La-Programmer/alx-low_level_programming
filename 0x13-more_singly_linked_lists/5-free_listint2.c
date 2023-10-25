#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - Frees a list
* @head: Pointer to the beginning of the list
* Return: Nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *ptr_next;
	listint_t **ptr_ptr_next;

	if (head == NULL)
		return;

	if (*head == NULL)
		return;

	current = *head;
	ptr_next = current->next;
	ptr_ptr_next = &ptr_next;
	free_listint2(ptr_ptr_next);

	free(*head);
	*head = NULL;
}
