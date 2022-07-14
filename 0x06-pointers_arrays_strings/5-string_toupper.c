#include "main.h"
#include <string.h>
/**
 * string_toupper - this function changes lowercase to uppercase.
 * @str: this value is the given string.
 *
 * Return: the function returns the transformed character.
 */
char *string_toupper(char *str)
{
	int index = strlen(str) - 1;

	int i;

	for (i = 0; i <= index; i++)
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
