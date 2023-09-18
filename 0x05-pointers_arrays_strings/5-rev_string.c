#include "main.h"
#include <stdio.h>
/**
* rev_string - Reverses a string
* @s: The string to be reversed
* Return: nothing
*/

void rev_string(char *s)
{
	int i = _strlen(s), j = 0;
	char tmp;

	while (j <= i / 2)
	{
		tmp = *(s + j);
		*(s + j) = *(s + (i - j));
		*(s + (i - j)) = tmp;
		j++;
	}
}

/**
* _strlen - Counts the length of a string
* @str: String to be counted
* Return: String length
*/

int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i - 1);
}
