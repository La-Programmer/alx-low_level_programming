#include "main.h"

/**
 * _memcpy - the function copies a memory area from
 * the source to the destination.
 * @dest: this is the destination that the memory area is
 * copied to.
 * @src: this is the source where the memory area is copied from.
 * @n: this is the number of bytes that would be copied from the
 * memory space.
 *
 * Return: the function returns a pointer to the destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
