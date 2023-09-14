#include "main.h"

/**
* _isdigit - Checks if a character is a digit
* @c: Character to be checked
* Return: Returs 1 if true and 0 if false
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
