#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is my main function
 * Return: my function returns zero
 */
int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{

		putchar(i);
		i += 1;

	}
	putchar('\n');

	return (EXIT_SUCCESS);
}
