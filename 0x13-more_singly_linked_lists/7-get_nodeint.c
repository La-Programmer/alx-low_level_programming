#include "lists.h"
#include <stdlib.h>
/**
* get_nodeint_at_index - Returns the nth node of a linked list
* @head: Pointer to the beginning of the list
* @index: Index of the node to return
* Return: Node at index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter != index && head != NULL)
	{
		head = head->next;
		counter++;
	}
	if (head == NULL)
		return (NULL);
	else
		return (head);
}
