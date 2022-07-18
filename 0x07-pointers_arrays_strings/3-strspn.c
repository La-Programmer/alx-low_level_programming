#include "main.h"

/**
 * _strspn - this function gets the lenght of a substring from
 * another string.
 * @s: this is the main string.
 * @accept: this is the substring.
 *
 * Return: the function returs the number of byted in the substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	int j = 0;

	int len = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
				if (s[i + 1] != accept[i + 1])
				{
					len = 0;
				}
			}
			j++;
		}
		i++;
	}

	return (len);
}
