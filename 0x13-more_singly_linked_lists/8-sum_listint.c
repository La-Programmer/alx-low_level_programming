#include "lists.h"
/**
* sum_listint - Sums all the data elements of a list
* @head: The pointer to the beginning of the list
* Return: Sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
