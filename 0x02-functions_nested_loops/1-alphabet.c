#include "main.h"
/**
* print_alphabet - prints the alphabet in lowercase
*
* Return: Returns nothing
*/

void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar('a' + i);
		i++;
	}
	_putchar('\n');
}
