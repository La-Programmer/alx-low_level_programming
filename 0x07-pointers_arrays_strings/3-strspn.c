#include "main.h"
/**
* _strspn - Gets the length of a prefix substring
* @s: Main string
* @accept: Substring
* Return: The number of bytes present in accept in the initial
* segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0;

	while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		i++;
	}
	return (k);
}
