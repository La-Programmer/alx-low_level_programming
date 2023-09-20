#include "main.h"
/**
* _strlen - Gets the length of string
* @s: String to be counted
* Return: Length of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}

/**
* _strcat - Concatenates two strings
* @dest: String to be appended to
* @src: String to append
* Return: Pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = _strlen(dest);


	while (*(src + i) != '\0')
	{
		*(dest + (j + i)) = *(src + i);
		i++;
	}
	*(dest + (j + i)) = '\0';
	return (dest);
}
