#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_listint - Prints all the elements in a list
* @h: Pointer to the first node of the list
* Return: Number of elements in the list
*/
size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
