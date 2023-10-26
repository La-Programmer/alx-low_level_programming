#include "main.h"
#include <stdlib.h>
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
 * clear_bit - Sets the value of a bit at a given index to 0
 * @n: Pointer to the number to be opearated on
 * @index: Index
 * Return: 1 if SUCCESS or 0 if FAILURE
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int counter = 0;
	unsigned long int holder;

	if (n == NULL)
		return (-1);
	holder = *n;

	while (counter < index)
	{
		holder >>= 1;
		counter++;
	}
	if (holder & 1)
	{
		*n -= exponent(2, counter);
		return (1);
	}
	return (1);
}
