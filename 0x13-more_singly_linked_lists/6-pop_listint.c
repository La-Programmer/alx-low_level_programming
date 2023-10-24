#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - Deletes the head node of a linked list
* @head: A pointer to a pointer to the beginning of the list
* Return: The data of the deleted head node
*/
int pop_listint(listint_t **head)
{
	listint_t *holder;
	int data;

	if (*head == NULL)
		return (0);
	holder = *head;
	*head = holder->next;
	data = holder->n;
	free(holder);

	return (data);
}
