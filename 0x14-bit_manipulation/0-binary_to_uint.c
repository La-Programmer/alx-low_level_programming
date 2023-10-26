#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* pow - Calculates the exponent of specified base and power
* @base: Base
* @exp: Exponent
* Return: Result of exponentiation
*/
unsigned int exponent(int base, int exp)
{
	int counter = 1;
	int holder = base;

	if (exp == 0)
		return (1);
	while (counter != exp)
	{
		base *= holder;
		counter++;
	}
	return (base);
}
/**
* binary_to_uint - Converts a binary number to an unsigned integer
* @b: String pointer to a string containing binary digits
* Return: Converted number or 0 if FAILURE
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, counter = 0, power;

	if (b == NULL)
		return (0);
	power = exponent(2, (strlen(b) - 1));
	while (b[counter != '\0'] && (b[counter] == '1' || b[counter] == '0'))
	{
		if (b[counter] == '1')
		{
			result += power;
		}
		power /= 2;
		counter++;
	}
	if (b[counter] != '\0')
		return (0);
	else
		return (result);
}
