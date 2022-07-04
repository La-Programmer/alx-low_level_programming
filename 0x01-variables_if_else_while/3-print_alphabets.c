#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is my main function
 * Return: My main function returns zero
 */
int main(void)
{
	char i = 'a';

	char j = 'A';

	while (i <= 'z')
	{
		putchar(i);

		i += 1;
	}

	while (j <= 'Z')
	{
		putchar(j);

		j += 1;
	}

	putchar('\n');

	return (0);

}
