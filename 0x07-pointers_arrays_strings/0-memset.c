#include "main.h"

/**
 * _memset - this function fills the first n bytes of a memory space
 * pointed to by a specific pinter with a constant byte.
 * @s: this argument is the pointer to the memory area.
 * @b: this argument is the constant byte that would be used to
 * fill the memory space.
 * @n: this argument is the amount of bytes of meemory that should be
 * filled.
 *
 * Return: the function returns the pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
