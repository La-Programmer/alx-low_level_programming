#include "main.h"
#include <stdio.h>
/**
* main - Prints the sun of all multiples of 3 and 5 below 1024
*
* Return: always 0
*/

int main(void)
{
	int i = 0;
	int total = 0;

	while (i < 1024)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			total += i;
		}
		i++;
	}
	printf("%i\n", total);
	return (0);
}
