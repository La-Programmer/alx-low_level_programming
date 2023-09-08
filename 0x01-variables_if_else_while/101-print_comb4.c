#include <stdio.h>
/**
* main - Prints all possible combinations of three digits.
*
* Description: The list is separated by commas and spaces and prints
* only the smallest combination of the three digits in ascending order.
* Return: Returns 0.
*/

int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i < 10)
	{
		j = i;
		while (j < 10)
		{
			k = j;
			while (k < 10)
			{
				if ((i != j) && (j != k) && (i != k))
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
