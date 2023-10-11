#include "dog.h"
/**
* init_dog - Initializes a variable of type 'struct dog'
* @d: Pointer to 'struct dog' structure
* @name: Name of dog
* @age: Age of dog
* @owner: Name of dog owner
* Return: Nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
