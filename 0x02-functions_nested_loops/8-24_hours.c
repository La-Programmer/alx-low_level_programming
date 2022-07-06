#include "main.h"
/**
 * jack_bauer - my function prints every minute of the day
 * Return: my function returns nothing.
 */
void jack_bauer(void)
{
	int hrs;

	int min;

	hrs = 0;

	while (hrs <= 23)
	{
		min = 0;

		while (min <= 59)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');

			min++;
		}

		hrs++;
	}
}
