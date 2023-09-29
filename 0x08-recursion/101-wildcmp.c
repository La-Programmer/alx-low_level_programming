#include "main.h"
/**
 * wildcmp - Checks if two strings are equal including wild characters
 * @s1: String 1
 * @s2: String 2
 * Return: 1 if equal 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	else if (*s1 == *s2 && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if ((*s1 == *(s2 + 1) && *(s1 + 1) == '\0'))
			return (wildcmp(s1, s2 + 1));
		else if (*(s1 + 1) != *(s2 + 1))
			return (wildcmp(s1 + 1, s2));
		else if (*s1 == '\0' && *(s2 + 1) != '\0')
			return (wildcmp(s1, s2 + 1));
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
