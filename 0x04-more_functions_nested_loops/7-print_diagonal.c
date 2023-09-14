#include "main.h"

/**
* print_diagonal - Prints a diagonal line
* @n: Number of times \ should be printed
* Return: nothing
*/

void print_diagonal(int n)
{
	int a = 0, i;

	if (n <= a)
	{
		_putchar('\n');
	}

	while (a < n)
	{
		for (i = 1; i <= a; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
}
