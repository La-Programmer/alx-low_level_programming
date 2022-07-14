#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - this function returns the last half of a string.
 * @str: this argument is a random string.
 *
 * Return: this function returns nothing.
 */
void puts_half(char *str)
{
	int i = strlen(str) - 1;

	int a;

	if ((i % 2) == 0)
	{
		a = i / 2;
	}
	else
	{
		a = (i + 1) / 2;
	}

	for (; a <= i; a++)
	{
		putchar(str[a]);
	}

	putchar('\n');
}
