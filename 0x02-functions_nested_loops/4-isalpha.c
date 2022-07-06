#include "main.h"
#include <ctype.h>
/**
 * _isalpha - My function checks whether the argument
 * is an alphabet
 * @c: argument takes a single character
 *
 * Return: returns 1 if true and 0 otherwise
 */
int _isalpha(int c)
{
	int result = isalpha(c) ? 1 : 0;

	return (result);
}
