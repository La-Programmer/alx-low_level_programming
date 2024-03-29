#include <stdio.h>
#include "dog.h"
/**
* print_dog - Prints a 'struct dog'
* @d: Pointer to the 'struct dog'
* Return: Nothing
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name ? d->name : "(nil)"));
		printf("Age: %.6f\n", (d->age ? d->age : 0));
		printf("Owner: %s\n", (d->owner ? d->owner : "(nil)"));
	}
}
