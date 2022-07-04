#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is my main function and it prints
 * the alphabet in reverse.
 * Return: my function returns zero.
 */
int main(void)
{
	char i;

	i = 'z';

	for (; i >= 'a' ; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
