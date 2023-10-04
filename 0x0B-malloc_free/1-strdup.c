#include <stdlib.h>
#include "main.h"
/**
* _strdup - Returns a pointer to a newly allocated space in memory
* @str: String to copy
* Return: Pointer to copied string
*/
char *_strdup(char *str)
{
	char *t;
	int i = 0, j = 0;

	if (!str)
		return (NULL);

	while (str[i] != '\0')
		i++;

	t = malloc(sizeof(char) * (i + 1));
	if (t == NULL)
		return (NULL);
	while (j < (i + 1))
	{
		t[j] = str[j];
		j++;
	}

	return (t);
}
