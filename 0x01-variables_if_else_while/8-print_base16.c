#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is my main function. It prints out all
 * the hexadecimal digits.
 * Return: My function returns zero.
 */
int main(void)
{
	int i;

	char h;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}

	for (h = 'a' ; h <= 'f' ; h++)
	{
		putchar(h);
	}

	putchar('\n');

	return (0);
}
