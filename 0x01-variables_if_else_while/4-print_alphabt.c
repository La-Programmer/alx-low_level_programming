#include <stdio.h>
#include <stdlib.h>
/**
 * main - My main function prints the lower
 * case alphabet excluding e and q
 * Return: My function returns zero
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
		{
			i += 1;
		}

		putchar(i);

		i += 1;

	}
	putchar('\n');

	return (0);
}
