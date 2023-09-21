#include "main.h"
/**
* print_number - Prints a number
* @n: Number to be printed
* Return: nothing
*/
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10 != 0)
		print_number(i / 10);

	_putchar('0' + i % 10);
}
