#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - this function prints a string in reverse.
 * @s: the argument is any random string.
 *
 * Return: my function returns nothing.
 */
void print_rev(char *s)
{
	int l = strlen(s);

	for (; l >= 0; --l)
	{
		putchar(s[l]);
	}

	putchar('\n');
}
