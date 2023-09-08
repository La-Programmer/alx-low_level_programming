#include <stdio.h>
/**
* main - Prints all base 16 numbers in lowercase
*
* Return: Returns 0
*/

int main(void)
{
	char a = '0';
	char b = 'a';
	int i = 0;

	while (i < 10)
	{
		putchar(a + i);
		i++;
	}
	while (i < 16)
	{
		putchar(b);
		b += 1;
		i++;
	}
	putchar('\n');
	return (0);
}
