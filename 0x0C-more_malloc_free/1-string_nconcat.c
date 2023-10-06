#include <stdlib.h>
#include "main.h"
/**
* string_nconcat - Concatenates two strings
* @s1: First string
* @s2: Second string
* Return: Pointer to new memory space for concatenated string,
* NULL if failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int i = 0, j;

	while (s1 != NULL && s1[i] != '\0')
		i++;

	t = malloc(sizeof(char) * (n + i + 1));
	if (t == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (j = 0; j < i; j++)
			t[j] = s1[j];
	}

	if (s2 != NULL)
	{
		for (j = 0; j < n; j++)
			t[i + j] = s2[j];
	}
	t[i + j] = '\0';
	return (t);
}
