#include "main.h"
#include <string.h>

/**
 * _strncat - this function concatenates two strings.
 * @dest: this argument is the destination pointer.
 * @src: this argument is the source pointer.
 * @n: this argument signifies the number of bytes available.
 *
 * Return: the funtion returns a pointer to the destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
