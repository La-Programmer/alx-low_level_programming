#include <stdio.h>
#include "main.h"
/**
* puts_half - Prints the second half of the string
* @str: The string to be printed
* Return: nothing
*/

void puts_half(char *str)
{
	int i = (_strlen(str) / 2) + 1;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

/**
* _strlen - Returns the length of a string
* @s: String to be counted
* Return: String length
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i - 1);
}
