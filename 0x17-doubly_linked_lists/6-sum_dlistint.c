#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data of a list
 * @head: Pointer to the beginning of the list
 * Return: Sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
