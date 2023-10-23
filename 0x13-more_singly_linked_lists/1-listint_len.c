#include "lists.h"
#include <stdlib.h>
/**
* listint_len - Counts the number of elements in the list
* @h: Pointer to the first element of the list
* Return: Number of elements in the list
*/
size_t listint_len(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
