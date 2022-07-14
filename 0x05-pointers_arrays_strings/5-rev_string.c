#include "main.h"
#include <string.h>

/**
 * rev_string - this function reverses a string.
 * @s: this argument is a random string.
 *
 * Return: this function returns nothing.
 */
void rev_string(char *s)
{
	int len = strlen(s) - 1;

	int i;

	char tmp;

	for (i = 0; i <= len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		len -= 1;
	}
}
