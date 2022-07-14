#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * puts2 - this function prints every other character
 * of a string.
 * @str: The argument is any string.
 *
 * Return: the function returns nothing.
 */
void puts2(char *str)
{
	int i = strlen(str) - 1;

	int a;

	for (a = 0; a <= i; a += 2)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
