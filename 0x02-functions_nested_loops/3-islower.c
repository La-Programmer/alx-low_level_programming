#include "main.h"
/**
* _islower - checks if a character is lowercase
* @c: Any random character
*
* Return: Returns 1 if true, 0 if false
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
