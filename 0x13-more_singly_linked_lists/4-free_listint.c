#include "lists.h"
#include <stdlib.h>
/**
* free_listint - Frees a list
* @head: Pointer to the beginning of the list
* Return: Nothing
*/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
