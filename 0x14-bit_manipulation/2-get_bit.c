#include "main.h"
/**
* get_bit - Gets the valie of a bit at a specified index
* @n: Number to operate on
* @index: Index starting from 0
* Return: Value at index or -1 if FAILURE
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter = 0;

	while (n != 0 && counter < index)
	{
		n >>= 1;
		counter++;
	}
	if (n == 0)
		return (-1);
	if (n & 1)
		return (1);
	return (0);
}
