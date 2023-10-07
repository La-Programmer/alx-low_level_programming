#include <stdlib.h>
#include "main.h"
/**
* string_nconcat - Concatenates two strings
* @s1: First string
* @s2: Second string
* @n: Number of bytes of second string to copy
* Return: Pointer to new memory space for concatenated string,
* NULL if failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int i = 0, j = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}

	t = malloc(sizeof(char) * (i + n + 1));
	if (t == NULL)
		return (NULL);

	for (; j < i; j++)
		t[j] = s1[j];

	if (s2 != NULL)
	{
		j = 0;
		while (j < n && s2[j] != '\0')
		{
			t[i + j] = s2[j];
			j++;
		}
	}
	t[i + j] = '\0';
	return (t);
}
