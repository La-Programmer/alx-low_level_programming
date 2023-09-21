#include "main.h"
/**
* _islower - Checks if a character is an alphabet
* @s: Character to be checked
* Return: 1 if true and 0 if false
*/
int _islower(char s)
{
	int i = 0;

	if (s > 96 && s < 123)
	{
		i++;
	}
	return (i);
}

/**
* cap_string - Capitalizes all the words of a string
* @str: String to be operated on
* Return: Pointer to the destination of the string
*/
char *cap_string(char *str)
{
	char sep[] = " \n\t,;.!?\"(){}";
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if ((str[i] == sep[j]) && _islower(str[i + 1]))
			{
				if (_islower(str[i + 2]))
				{
					str[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
