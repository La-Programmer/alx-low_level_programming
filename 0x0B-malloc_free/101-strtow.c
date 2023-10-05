#include <stdlib.h>
#include "main.h"

/**
* count_words - Counts the number of words in a string
* @str: String
* Return: Number of words
*/
int count_words(char *str)
{
	int i, j = 0;

	if (str[0] != ' ')
		j++;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			if ((str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\0'))
				j++;
		}
	}
	return (j);
}

/**
* strtow - Divides a string into words
* @str: String
* Return: Pointer to an array of pointers to strings
*/
char **strtow(char *str)
{
	char **t;
	int i, j, k, m, d = count_words(str);
	int word_start, word_end;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	t = malloc(sizeof(char *) * (d + 1));
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}
	for (i = 0, j = 0; str[i] != '\0' && (j < 3); i++)
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;

		word_start = i;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			i++;

		word_end = i;

		t[j] = malloc(sizeof(char) * (word_end - word_start + 1));
		if (t[j] == NULL)
		{
			for (m = 0; m <= j; m++)
				free(t[m]);
			free(t);
			return (NULL);
		}

		for (k = 0; word_start < word_end; word_start++, k++)
			t[j][k] = str[word_start];
		t[j][k] = '\0';
		j++;
	}
	t[j] = NULL;
	return (t);
}
