#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - Multiples two numbers
* @argc: Argument count
* @argv: Argument vector
* Return: 0 Success, 1 Error
*/
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", (i * j));
	return (0);
}
