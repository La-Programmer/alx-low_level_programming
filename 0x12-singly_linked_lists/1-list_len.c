#include "lists.h"
/**
* list_len - Returns the length of a singly linked list
* @h: Pointer to the first element of the singly linked list
* Return: Length of the singly linked list
*/
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
