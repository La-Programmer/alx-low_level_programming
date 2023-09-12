#include "main.h"
/**
* jack_bauer - Prints every minute of the day from 00:00 to 23:59
*
* Return: nothing
*/

void jack_bauer(void)
{
	int a = 0, b;

	while (a < 24)
	{
		b = 0;
		while (b < 60)
		{
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
			_putchar(':');
			_putchar('0' + (b / 10));
			_putchar('0' + (b % 10));
			_putchar('\n');
			b++;
		}
		a++;
	}
}
