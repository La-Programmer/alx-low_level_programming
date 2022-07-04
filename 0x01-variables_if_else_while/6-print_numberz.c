#include <stdio.h>
#include <stdlib.h>

/**
 * main - my main function prints out the decimal
 * digits using only putchar.
 * Return: my function returns zero.
 */
int main(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{

		putchar(i);

		i += 1;

	}
	putchar('\n');

	return (0);
}
