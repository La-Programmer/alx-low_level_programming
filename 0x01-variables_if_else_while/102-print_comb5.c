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
	int a = 0;
	int b;
	int c;
	int d;

	while (a < 10)
	{
	b = 0;
	while (b < 10)
	{
		c = a;
		while (c < 10)
		{
			d = b;
			while (d < 10)
			{
				if (b != d)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
					if ((a == 9) && (b == 8) && (c == 9) && (d == 9))
					{
					break;
					}
					putchar(',');
					putchar(' ');
				}
				d++;
			}
			c++;
		}
		b++;
	}
	a++;
}
putchar('\n');
return (0);
}
