#include "main.h"
/**
* _strstr - Finds the first occurrence of a substring in a string
* @haystack: String
* @needle: Substring
* Return: A pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, hold, len = 0;

	while (needle[len] != '\0')
		len++;

	if (len == 0 && needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			hold = i;
			while (haystack[i] == needle[j] && needle[j] != '\0')
			{
				i++;
				j++;
			}
			if (j == len)
				return (haystack + hold);
			i = hold;
		}
		i++;
	}
	return (0);
}
