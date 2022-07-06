#include "main.h"
/**
 * print_alphabet - This function prints the alphabet
 * Return: The function does not return
 */
void print_alphabet(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);

		a += 1;
	}
	_putchar('\n');
}
