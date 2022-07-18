#include "main.h"

/**
 * _strchr - this function searches a string for a character.
 * @s: this argument is the string to be searched.
 * @c: this arguemtn is the character to be found.
 *
 * Return: the function returns a pointer to the first occurence
 * of the string.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	char *p;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			
			return (p);

			break;
		}
		i++;
	}
	return (0);

}
