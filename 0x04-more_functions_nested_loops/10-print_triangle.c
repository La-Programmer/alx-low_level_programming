#include "main.h"

/**
* print_triangle - Prints a triangle
* @size: Size of the triangle
* Return: nothing
*/

void print_triangle(int size)
{
	int i = 1, j;

	while (i <= size)
	{
		j = 0;
		while (j < size)
		{
			if (j < size - i)
				_putchar(' ');
			else
				_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
