#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node_end - Add a new node to the end of a singly linked list
* @head: Pointer to the pointer to the beginning of the list
* @str: String to be contained in the new node
* Return: Address of the new node, NULL if failure
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *current;

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new;
	else
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->str = strdup(str);
		new->len = strlen(str);

	return (new);
}
