#include "main.h"
#include <string.h>

/**
 * _strstr - this function finds the first occurence of
 * a substring in a string.
 * @haystack: this argument is the main string.
 * @needle: this argument is the substring.
 *
 * Return: the function returns a pointer to the substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	char *p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;

		for (; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				if (needle[i + 1] == '\0')
				{
					continue;
				}
				else
				{
					if (haystack[i + 1] != needle[j + 1])
					{
						break;
					}
				}
				p = &haystack[i];

				return (p);
			}
		}
	}
	return (0);
}
