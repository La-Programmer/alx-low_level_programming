#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
* new_dog - Creates a new dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Name of dog owner
* Return: Pointer to new_dog, NULL if Failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		free(name)
		free(owner);
		return (NULL);
	}
	dog->name = strdup(name);
	dog->owner = strdup(owner);
	dog->age = age;

	return (dog);
}
