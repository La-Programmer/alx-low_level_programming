#include <stdlib.h>
#include "main.h"
/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: Memory address of memory to be reallocated
* @old_size: Size of old memory space
* @new_size: Size of new memory space
* Return: Pointer to newly allocated memory space
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *t, *tempPtr;
	unsigned int i;

	if (new_size == old_size && ptr != NULL)
		return (ptr);

	if (ptr == NULL)
	{
		t = malloc(new_size);
		if (t == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
		free(ptr);

	t = malloc(new_size);
	if (t == NULL)
		return (NULL);

	tempPtr = ptr;
	for (i = 0; i < old_size; i++)
		t[i] = tempPtr[i];

	free(ptr);
	return (t);
}
