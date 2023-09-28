#include "main.h"
/**
* _strlen_recursion - Returns the length of a string
* @s: String to be counted
* Return: nothing
*/
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (i = 0);
	return (i = 1 + _strlen_recursion(s + 1));
}
