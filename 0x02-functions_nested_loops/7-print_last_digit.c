#include "main.h"
/**
* print_last_digit - Prints the last digit of a number
* @n: Number to be checked
*
* Return: Returns the last digit of the input
*/

int print_last_digit(int n)
{
	long res;
	long a = (long)n;

	if (n < 0)
	{
		a *= -1;
	}
	res = a % 10;
	_putchar('0' + res);
	return (res);
}
