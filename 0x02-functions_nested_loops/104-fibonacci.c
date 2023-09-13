#include <stdio.h>
#include "main.h"
/**
* main - Prints the first 50 fibonacci numbers
*
* Return: Returns 0
*/

int main(void)
{
	long a = 1;
	long b = 2;
	long c = 0;
	long tmp, i;

	c = a + b;
	printf("%li, %li, %li, ", a, b, c);
	for (i = 0; i < 95; i++)
	{
		tmp = c;
		c += b;
		b = tmp;
		if (c < 0)
		{
			printf("%li", (c * -1));
		}
		else
		{
			printf("%li", c);
		}
		if (i  != 94)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
