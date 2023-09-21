#include "main.h"
/**
* _strcmp - Compares two strings
* @s1: First string
* @s2: Second string
* Return: Positive number if s1 > s2, negative number if s1 < s2, 0 if
* neither
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			j = 15;
			break;
		}
		else if (s1[i] < s2[i])
		{
			j = -15;
			break;
		}
		else if (s1[i + 1] < s2[i + 1])
		{
			j = -15;
			break;
		}
		else if (s1[i + 1] > s2[i + 1])
		{
			j = 15;
			break;
		}
		i++;
	}
	return (j);
}
