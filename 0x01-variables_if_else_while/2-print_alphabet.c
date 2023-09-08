#include <stdio.h>
/**
* main - Prints the alphabet in lowercase
*
* Return: Returns 0
*/

int main(void)
{
	char c = 'a';
	int i = 0;

	while (i < 26)
	{
		putchar(c + i);
		i++;
	}
	putchar('\n');
	return (0);
}
