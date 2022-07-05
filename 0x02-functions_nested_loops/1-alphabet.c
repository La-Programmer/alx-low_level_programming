#include <stdio.h>
#include "main.h"
/**
 * main - this program prints the alphabet
 * Return: the function returns zero
 */
void print_alphabet(void)
{

	char i;

	i = 'a';

	while (i <= 'z')
	{
		putchar(i);

		i++;
	}

	putchar('\n');

}
