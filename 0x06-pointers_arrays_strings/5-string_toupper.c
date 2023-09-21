#include "main.h"
/**
* string_toupper - Changes lowercase letters to uppercase
* @str: String to be operated on
* Return: Returns the pointer to the resultant string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
