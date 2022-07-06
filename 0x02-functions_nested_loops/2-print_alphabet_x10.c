#include "main.h"
/**
 * print_alphabet_x10 - My function prints the alphabet
 * ten times
 * Return: my function does not return
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
