#include <stdio.h>
#include "main.h"
/**
* main - Adds all even fibonacci numbers less than 4,000,000
* Return: Returns 0
*/

int main(void)
{
	long a = 1;
	long b = 2;
	long c = 0;
	long even = 2;
	long tmp;

	c = a + b;
	for (; c < 4000000;)
	{
		tmp = c;
		c += b;
		b = tmp;
		if (c % 2 == 0)
		{
			even += c;
		}
	}
	printf("%li\n", even);
	return (0);
}
