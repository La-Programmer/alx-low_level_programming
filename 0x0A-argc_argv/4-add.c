#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* main - Adds positive numbers
* @argc: Argument count
* @argv: Argument vector
* Return: 0 Success, 1 Error
*/
int main(int argc, char *argv[])
{
	int sum, i;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]) && *argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
