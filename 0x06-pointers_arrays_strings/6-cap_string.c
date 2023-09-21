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
* _isupper - Checks if a character is an uppercase alphabet
* @s: Chracter to check
* Return: 1 if true and 0 if false
*/
int _isupper(char s)
{
	if (s > 64 && s < 91)
		return (1);
	return (0);
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
			if (str[i] == sep[j])
			{
				if (_islower(str[i + 1]))
					str[i + 1] -= 32;
				break;
			}
		}	
		if ((_isupper(str[i]) || _islower(str[i])) && _isupper(str[i + 1]))
			str[i + 1] += 32;
		i++;
	}
	return (str);
}
