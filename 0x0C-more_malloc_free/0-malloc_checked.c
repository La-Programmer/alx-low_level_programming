#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - Allocates memory using malloc
* @b: Size of memory to be allocated
* Return: A pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);

	return (t);
}
