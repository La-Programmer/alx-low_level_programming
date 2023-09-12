#include <stdio.h>
#include "main.h"
/**
* main - Prints the first 50 fibonacci numbers
*
* Return: Returns 0
*/

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;
	int tmp, i;

	c = a + b;
	printf("%i, %i, %i, ", a, b, c);
	for (i = 0; i < 49; i++)
	{
		tmp = c;
		c += b;
		b = tmp;
		if (c < 0)
		{
			printf("%i", (c * -1));
		}
		else
		{
			printf("%i", c);
		}
		if (i != 48)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
