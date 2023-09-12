#include "main.h"
/**
* _isalpha - Checks if a character is an alphabet
* @c: Character to be checked
*
* Return: Returns 1 if true, 0 if false
*/

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}
