#include "main.h"
#include <string.h>

/**
 * _strncpy - this function copies a string from the source
 * to the destination.
 * @dest: this argument is a pointer to the destination.
 * @src: this argument is a pointer to the source.
 * @n: this argument is the amount of bytes allowed.
 *
 * Return: the funstion returns a character.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
