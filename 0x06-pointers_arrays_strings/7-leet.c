#include "main.h"
/**
* _isalpha - Checks whether a character is an alphabet
* @s: Character to be checked
* Return: 1 if true 0 if false
*/

int _isalpha(char s)
{
	if ((s > 64 && s < 91) || (s > 96 && s < 123))
		return (1);
	return (0);
}
/**
* leet - Encodes a string into 1337
* @str: String to be encoded
* Return: Pointer to the destination of the encoded string
*/

char *leet(char *str)
{
	char code[] = "a4e3o0t7l1";
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; code[j] != '\0'; j++)
		{
			if (((str[i] == code[j]) || str[i] == (code[j] - 32)) && _isalpha(str[i]))
			{
				str[i] = code[j + 1];
			}
		}
		i++;
	}
	return (str);
}
