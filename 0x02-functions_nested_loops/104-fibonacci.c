#include <stdio.h>
#include "main.h"
/**
* main - Prints the first 50 fibonacci numbers
*
* Return: Returns 0
*/

int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c = 0;
	unsigned long tmp, i;

	c = a + b;
	printf("%lu, %lu, %lu, ", a, b, c);
	for (i = 0; i < 94; i++)
	{
		tmp = c;
		c += b;
		b = tmp;
		printf("%lu", c);
		if (i  != 93)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
