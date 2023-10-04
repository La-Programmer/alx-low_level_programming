#include <stdlib.h>
#include "main.h"
/**
* create_array - Creates an array of chars
* @size: Size of the array
* @c: Character to use to initialize array
* Return: Pointer to array Success, NULL Fail
*/
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
