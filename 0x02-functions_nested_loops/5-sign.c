#include "main.h"
/**
 * print_sign - This function prints the sign of
 * an integer.
 * @n: the argument is an integer of any value.
 *
 * Return: function returns 1 if true and 0 if false.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);

	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);

	}
	else
	{
		_putchar('0');

		return (0);

	}
}
