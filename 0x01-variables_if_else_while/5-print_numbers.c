#include <stdio.h>
#include <stdlib.h>
/**
 * main - My main function prints all decimal digits.
 * Return: my function returns zero.
 */
int main(void)
{
	unsigned int i;

	i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i += 1;
	}
	putchar('\n');

	return (0);

}
