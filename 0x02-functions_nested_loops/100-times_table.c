#include "main.h"
/**
* print_times_table - Prints times table from 0 to n
* @n: Number to print to
*
* Return: nothing
*/

void print_times_table(int n)
{
	int i = 0, j, res;

	if (!(n < 0 || n > 15))
	{
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			res = j * i;
			if (res < 10)
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + res);
			}
			else if (res >= 100)
			{
				_putchar('0' + (res / 100));
				_putchar('0' + ((res % 100) / 10));
				_putchar('0' + (res % 10));
			}
			else
			{
				if (j > 0)
				{
					_putchar(' ');
				}
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
			}
			if (j == n)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
	}
	}
}
