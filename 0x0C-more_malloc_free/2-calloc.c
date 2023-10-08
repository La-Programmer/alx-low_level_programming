#include <stdlib.h>
#include "main.h"
/**
* _calloc - Allocates memory for an array
* @nmemb: Number of elements
* @size: Size of elements
* Return: Pointer to allocated memory or NULL Failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;
	unsigned int i;
	char *tempPtr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);

	tempPtr = t;
	for (i = 0; i < nmemb; i++)
		tempPtr[i] = 0;

	return (t);
}
