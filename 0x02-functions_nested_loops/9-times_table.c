#include "main.h"
/**
 * times_table - My function prints the 9 times
 * table
 * Return: my function does not return
 */
void times_table(void)
{
	int a, b;

	for (a = 0 ; a < 10 ; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 1 ; b < 10 ; b++)
		{
			int c = a * b;

			if (c >= 10)
			{
				_putchar((c / 10) + '0');
			}

			else
			{
				_putchar(' ');
			}

			_putchar((c % 10) + '0');

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');

			}

		}
		_putchar('\n');
	}
}
