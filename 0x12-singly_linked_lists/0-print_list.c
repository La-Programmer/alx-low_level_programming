#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_list - Prints all the elements of a singly linked list
* @h: Pointer to the first element of the list
* Return: Number of elements of the singly linked list.
*/
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		current = current->next;
		count++;
	}
	return (count);
}
