#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* argstostr - Concatenates all the arguments of your program
* @ac: Argument count
* @av: Argument vector
* Return: Pointer to a new string, NULL Failure
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *t;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}

	t = malloc(sizeof(char) * k);
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0' && l < k; j++)
		{
			t[l] = av[i][j];
			l++;
		}
		t[l] = '\n';
		l++;
	}
	return (t);
}
