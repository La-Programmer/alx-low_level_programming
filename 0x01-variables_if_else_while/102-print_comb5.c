#include <stdio.h>
/**
* main - Prints all possible combinations of two two-digit numbers.
*
* Description: The two two-digits are separated by spaces and the list
* is delimited by commas and spaces and is in ascending order. Also
* 00 10 and 10 00 are considered the same combination.
* Return: Returns 0.
*/

int main(void)
{
	int num1 = 0;
	int num2;

	while (num1 < 100)
	{
		num2 = num1;
		while (num2 < 100)
		{
			if (num1 != num2)
			{
				putchar('0' + (num1 / 10));
				putchar('0' + (num1 % 10));
				putchar(' ');
				putchar('0' + (num2 / 10));
				putchar('0' + (num2 % 10));
				if (num1 == 98 && num2 == 99)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
