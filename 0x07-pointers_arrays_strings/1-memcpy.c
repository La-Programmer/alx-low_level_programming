#include "main.h"
/**
* _memcpy - Copies memory area
* @dest: Pointer to the destination of the copied bytes
* @src: Pointer to the source of the copied bytes
* @n: Number of bytes to copy
* Return: Pointer to the destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
