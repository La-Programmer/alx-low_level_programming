#include "main.h"
/**
* _strchr - Locates a character in a string
* @s: String
* @c: Character to locate
* Return: Pointer to the first occurence of the chracter
*/
char *_strchr(char *s, char c)
{
	int i = 0;
	char *j;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j = s + i;
			break;
		}
		i++;
	}
	return (j);
}
