#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a linked list
 * @head: Pointer to the beginning of the list
 * @index: Node index to return
 * Return: Node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count != index && head != NULL)
	{
		head = head->next;
		count++;
	}
	return (head);
}
