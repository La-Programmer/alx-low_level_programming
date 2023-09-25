#include "main.h"
/**
* set_string - Sets the value of a pointer to a char
* @s: Pointer to the pointer to set
* @to: char to set it to
* Return: nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}
