#include "main.h"
/**
 *print_last_digit - this function prints the last
 * digit of a number
 * @a: the argument is any given number
 *
 * Return: returns the last digit of a
 */
int print_last_digit(int a)
{
	int b = a % 10;

	if (b < 0)
	{
		b = -1 * b;
	}

	_putchar(b + '0');

	return (b);

}
