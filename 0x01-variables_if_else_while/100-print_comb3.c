#include <stdio.h>
/**
* main - Prints all possible combinations of two-digit numbers.
*
* Description: The list is separated by commas and spaces and prints
* only the smallest combination of two digits in ascending order.
* Return: Returns 0
*/

int main(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = i;
		while (j < 10)
		{
			if (i != j)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
