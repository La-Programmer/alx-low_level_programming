#include "main.h"
/**
* _strlen - Gets the length of a string
* @s: String to be counted
* Return: Length of the string
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
* _strncat - Concatenates two strings to n characters of the second
* string
* @dest: String to be appended to
* @src: String to append
* @n: Number of characters of src string to append
* Return: A pointer to string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = _strlen(dest), j = 0;

	while (j < n)
	{
		*(dest + (i + j)) = *(src + j);
		if (*(src + j) == '\0')
			break;
		j++;
	}
	return (dest);
}
