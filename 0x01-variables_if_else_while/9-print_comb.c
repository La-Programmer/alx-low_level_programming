#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is my main function,
 * it outputs all possible combinations of
 * decimal digits comma separated.
 * Return: my function returns zero.
 */
int main(void)
{
	int i;

	i = '0';

	for (; i <= '9' ; i++)
	{
		putchar(i);

		if (i == '9')
		{
			break;
		}

		putchar(',');

		putchar(' ');
	}

	putchar('\n');

	return (0);
}
