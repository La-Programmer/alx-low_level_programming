#include "main.h"
#include <string.h>

/**
* _strcmp - this function compares two strings.
* @s1: this argument is the first string.
* @s2: this argument is the second string.
*
* Return: the function returns a positive number
* neative number or 0 depending on the difference between the two
* string.
*/
int _strcmp(char *s1, char *s2)
{
	int res;

	res = strcmp(s1, s2);

	return (res);
}
