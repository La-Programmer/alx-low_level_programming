#include <stdlib.h>
#include "main.h"
/**
 * exponent - Calculates the exponent of specified base and power
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
 * set_bit - Sets the bit at a given index to 1
 * @n: Number to operate on
 * @index: Index
 * Return: 1 if SUCCESS, 0 if FAILURE
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int counter = 0;
	unsigned long int holder = *n;

	if (n == NULL)
		return (-1);
	while (counter < index)
	{
		holder >>= 1;
		counter++;
	}
	if (holder & 1)
		return (1);
	*n += exponent(2, counter);
	return (1);
}
