#include <stdio.h>
/**
* main - Prints all single digit numbers of base 10 starting from 0
*
* Return: Returns 0
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
