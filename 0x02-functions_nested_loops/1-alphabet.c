#include <stdio.h>
#include "main.h"
/**
 * main - this program prints the alphabet
 * Return: the function returns zero
 */
int main(void)
{

	char i;

	i = 'a';

	while (i <= 'z')
	{
		putchar(i);

		i++;
	}

	putchar('\n');

	return (0);

}
