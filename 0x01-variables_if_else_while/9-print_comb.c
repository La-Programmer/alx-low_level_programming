#include <stdio.h>
/**
* main - Prints all possible combinations of single-digit numbers.
*
* Description: The numbers are separated by commas and spaces.
* Return: Returns 0
*/

int main(void)
{
	int i = 0;
	char a = '0';

	while (i < 10)
	{
		putchar(a + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
