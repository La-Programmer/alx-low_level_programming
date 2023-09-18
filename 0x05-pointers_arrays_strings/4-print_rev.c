#include "main.h"
/**
* print_rev - Prints a string in reverse
* @s: String to be reversed
* Return: nothing
*/

void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}

/**
* _strlen - Returns the length of the string
* @str: String to be counted
* Return: string length
*/

int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
