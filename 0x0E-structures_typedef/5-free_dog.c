#include <stdlib.h>
#include "dog.h"
/**
* free_dog - Frees an instance of the struct dog
* @d: Pointer to the struct dog
* Return: Nothing
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
