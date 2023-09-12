#include "main.h"
#include <stdio.h>
/**
* print_to_98 - Prints all natural numbers from n to 98
* @n: Number to start printing from
*
* Return: nothing
*/

void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
		_putchar('\n');
	}
	else
	{
		while (n != 98)
		{
			printf("%i, ", n);
			if (n < 98)
			{
				n++;
			}
			else
			{
				n--;
			}
		}
		printf("98\n");
	}
}
