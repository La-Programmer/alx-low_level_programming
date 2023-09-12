#include "main.h"
/**
* print_alphabet_x10 - prints the lowercase alphabet 10 times
*
* Return: Returns nothing
*/

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 26)
		{
			_putchar('a' + j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
