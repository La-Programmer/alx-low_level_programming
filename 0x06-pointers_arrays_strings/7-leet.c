#include "main.h"
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
		for (j = 0; code[j] != '\0'; j += 2)
		{
			if (((str[i] == code[j]) || str[i] == (code[j] - 32)))
			{
				str[i] = code[j + 1];
			}
		}
		i++;
	}
	return (str);
}
