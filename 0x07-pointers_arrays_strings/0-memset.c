#include "main.h"
/**
* _memset - Fills memory with a constant byte
* @s: Pointer to memory space to be filled
* @b: Constant byte
* @n: Numbers of bytes of memory to be filled
* Return: Pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
