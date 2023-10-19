#include "lists.h"
#include <stdlib.h>
/**
* free_list - Frees the memory space allocated for a singly linked list
* @head: Pointer to the first element of the singly linked list
* Return: Nothing
*/
void free_list(list_t *head)
{
	list_t *current;

	if (head == NULL)
		return;

	current = head;
	free(current->str);
	free_list(current->next);
	free(current);
}
