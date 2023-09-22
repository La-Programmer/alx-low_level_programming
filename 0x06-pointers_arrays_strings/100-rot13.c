#include "main.h"
/**
* rot13 - Encodes a string using rot13
* @str: String to be encoded
* Return: Pointer to the address of the encoded string
*/

char *rot13(char *str)
{
	int i = 0, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
