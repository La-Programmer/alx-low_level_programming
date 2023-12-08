#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Prints all elements in a doubly linked list
 * @h: The doubly linked list
 * Return: The number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
