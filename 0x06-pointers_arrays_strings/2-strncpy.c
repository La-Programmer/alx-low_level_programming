#include "main.h"
/**
 * _strlen - Gets the length of a string
 * @s: The string to be counted
 * Return: Length of string
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
 * _strncpy - Copies a string
 * @dest: Destination address to copy string to
 * @src: Source address to copy string from
 * @n: Number of characters to copy
 * Return: Pointer to the destination address
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
