#include <stdlib.h>
#include "main.h"
/**
* _calloc - Allocates memory for an array using malloc
* @nmemb: Number of elements of array
* @size: Size of array elements
* Return: A pointer to the allocated memory, NULL if Failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	t = malloc(nmemb * size);

	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		t[i] = 0;
	}

	return (t);
}
