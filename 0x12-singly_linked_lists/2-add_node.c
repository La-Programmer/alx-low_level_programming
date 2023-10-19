#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node - Adds a new node at the beginning of a singly linked list
* @head: Pointer to pointer to the beginning of the list
* @str: String to be stored in new node
* Return: Address to new node, NULL if failure
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
