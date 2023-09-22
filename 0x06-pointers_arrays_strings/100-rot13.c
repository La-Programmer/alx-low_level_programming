#include "main.h"
/**
* rot13 - Encodes a string using rot13
* @str: String to be encoded
* Return: Pointer to the address of the encoded string
*/

char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] < 'N') || (str[i] >= 'a' && str[i] < 'n'))
			str[i] += 13;

		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
			str[i] -= 13;

		i++;
	}
	return (str);
}
