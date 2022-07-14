#include "main.h"
#include <string.h>

/**
 * _strcat - this function concatenates two strings.
 * @dest: this argument is the pointer to the destination.
 * @src: this argument is the pointer to the source.
 *
 * Return: this function returns a character.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
