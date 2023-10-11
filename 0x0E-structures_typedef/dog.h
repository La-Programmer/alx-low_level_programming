#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;
/**
* struct dog - Structure definition for a dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Name of the dog owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
