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
	int index = 0;

	while (str[index] != '\0')
	{
		if ((str[index] >= 97) && (str[index] <= 122))
		{
			str[index] -= 32;
		}
		else
		{
			continue;
		}
	index++;
	}
	return (str);
}
