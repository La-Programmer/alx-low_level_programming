#include "main.h"
#include <stdio.h>
/**
* _atoi - Converts a string to an integer
* @s: String to be converted
* Return: Integer value
*/
int _atoi(char *s)
{
	unsigned int i = 0, minus = 0, check = 0, result = 0, digit;
	int sign = 1;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			minus++;

		while (_isdigit(*(s + i)))
		{
			digit = *(s + i) - '0';
			result = result * 10 + digit;
			i++;
			check++;
		}
		if (check > 0)
			break;
		i++;
	}
	if (minus % 2 != 0)
		sign = -1;
	return (result * sign);
}
/**
* _isdigit - Checks whether a character is a digit
* @a: Character to be checked
* Return: Returns 1 if true and 0 if false
*/
int _isdigit(char a)
{
	int i = 0, j = 0;

	while (i < 10)
	{
		if (a == ('0' + i))
		{
			j++;
			break;
		}
		i++;
	}
	return (j);
}
