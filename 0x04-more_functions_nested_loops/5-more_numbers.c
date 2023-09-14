#include "main.h"

/**
* more_numbers - Prints 0 to 14 ten times
* Return: nothing
*/

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
			}
			_putchar('0' + (j % 10));
			j++;
		}
		i++;
		_putchar('\n');
	}
}
