#include "main.h"

/**
* _isupper - Checks if a character is uppercase
* @c: Character to be chekced
* Return: Returns 0 if false and 1 if true
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
