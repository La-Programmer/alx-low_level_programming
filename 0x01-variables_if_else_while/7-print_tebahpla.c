#include <stdio.h>
/**
* main - Prints the lowercase alphabet in reverse
*
* Return: Returns 0
*/

int main(void)
{
	char c = 'z';
	int i = 0;

	while (i < 26)
	{
		putchar(c - i);
		i++;
	}
	putchar('\n');
	return (0);
}
