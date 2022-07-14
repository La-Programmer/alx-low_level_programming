#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - this function copies the string pointed to
 * by the source pointer to the destination pointer.
 * @dest: this argument is the destination pointer.
 * @src: this argument is the source pointer.
 *
 * Return: the function returns the pointer to the destination.
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
