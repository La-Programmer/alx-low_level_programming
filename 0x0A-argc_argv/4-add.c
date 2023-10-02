#include <stdlib.h>
#include <ctype.h>
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
	int sum = 0, i, j;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]) && argv[i][j] != '0')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
