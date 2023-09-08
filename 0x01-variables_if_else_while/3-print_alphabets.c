#include <stdio.h>
/**
* main - Prints the alphabet in lowercase and then in uppercase
*
* Return: Returns 0
*/

int main(void)
{
	char c = 'a';
	char a = 'A';
	char i = 0;

	while (i < 26)
	{
		putchar(c + i);
		i++;
	}
	while (i < 52)
	{
		putchar(a + (i - 26));
		i++;
	}
	putchar('\n');
	return (0);
}
