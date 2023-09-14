#include "main.h"

/**
* print_line - Draws a straight line
* @n: Line distance in number format
* Return: nothing
*/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
