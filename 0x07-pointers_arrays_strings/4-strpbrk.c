#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - this function finds the first occurence of
 * any character of a substring in a string.
 * @s: this argument is the string.
 * @accept: this argument is the substring.
 *
 * Return: the return value is the pointer to the
 * address of the occurence of the first character
 * that matches the requirement.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		for (; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				for (; s[i] != '\0'; i++)
				{
					return (p);
				}
			}
		}
	}
	return (0);
}
