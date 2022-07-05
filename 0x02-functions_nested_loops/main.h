#ifndef main.h
#define main.h
#include <stdio.h>
/**
 * _putchar - My function prints
 * _putchar
 * Return: The function returns zero
 */

int _putchar(void)
{
	printf("_putchar\n");
	return (0);
}

void print_alphabet(void);

void print_alphabet(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);

		i++;
	}
}

#endif
