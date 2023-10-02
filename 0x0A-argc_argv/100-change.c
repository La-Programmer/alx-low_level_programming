#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - Prints the minimum number of coins for change for a specific
* amount
* @argc: Argument count
* @argv: Argument vector
* Return: 0 Success, 1 Error
*/
int main(int argc, char *argv[])
{
	int cents, coins[5] = {25, 10, 5, 2, 1}, result = 0, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= coins[i])
		{
			result += cents / coins[i];
			cents = cents % coins[i];
		}
		i++;
	}
	printf("%d\n", result);
	return (0);
}
