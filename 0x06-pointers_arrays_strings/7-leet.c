#include "main.h"
#include <string.h>

/**
 * leet - this function encodes certain alphabets
 * with certain numbers.
 * @s: this argument is a random string.
 *
 * Return: the function returns the encoded string.
 */
char *leet(char *s)
{
	char *a, *b;

	int i, j;

	a = "AaEeOoTtLl";
	b = "4433007711";

	i = 0;

	while (s[i] != '\0')
	{
		int len2 = strlen(a);

		for (j = 0; j < len2; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
		i++;
	}
	return (s);
}
