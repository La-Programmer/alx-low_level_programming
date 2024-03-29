#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a list
 * @h: Doubly linked list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
