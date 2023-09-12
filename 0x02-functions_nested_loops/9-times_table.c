#include "main.h"
/**
* times_table - Prints the 9 times table starting from 0
*
* Return: nothing
*/

void times_table(void)
{
	int i = 0, j, res;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			res = j * i;
			if (res > 9)
			{
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
			}
			else
			{
				if (j > 0)
				{
					_putchar(' ');
				}
				_putchar('0' + res);
			}
			if (j == 9)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
