#include "main.h"
#include <ctype.h>
/**
 * _islower - My funtion checks for lower case
 * @c - the argument is an input of a single character
 *
 * Return: The function returns 1 if its true and 0 otherwise.
 */
int _islower(int c)
{
	int result;

	result = islower(c) ?  1 :  0;

	return(result);

}
