#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - Adds a node to the beginning of the list
* @head: Pointer to a pointer to the beginning of the list
* @n: Integer value to be stored in the new node
* Return: Address of the new element or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
