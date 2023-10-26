#include "main.h"
/**
* flip_bits - Gets the number of bits that need to be flipped to change
* one number to another
* @n: First number
* @m: Second number
* Return: The number of bits that need to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int holder = m ^ n;
	int counter = 0;

	while (holder != 0)
	{
		if (holder & 1)
			counter++;
		holder >>= 1;
	}
	return (counter);
}
