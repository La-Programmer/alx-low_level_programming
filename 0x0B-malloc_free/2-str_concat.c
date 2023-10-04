#include <stdlib.h>
#include "main.h"
/**
* str_concat - Concatenates two strings
* @s1: String 1
* @s2: String 2
* Return: Pointer to newly allocated memory space, NULL Failure
*/
char *str_concat(char *s1, char *s2)
{
	char *t;
	int i = 0, j = 0, m = 0, n = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}
	t = malloc(sizeof(char) * (i + j + 1));
	if (t == NULL)
		return (NULL);

	while (m < i)
	{
		t[m] = s1[m];
		m++;
	}
	while (n < j)
	{
		t[m + n] = s2[n];
		n++;
	}
	t[m + n] = '\0';
	return (t);
}
