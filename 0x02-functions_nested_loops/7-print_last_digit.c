#include "main.h"
/**
* print_last_digit - Prints the last digit of a number
* @n: Number to be checked
*
* Return: Returns the last digit of the input
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + (n % 10));
	return (n % 10);
}
