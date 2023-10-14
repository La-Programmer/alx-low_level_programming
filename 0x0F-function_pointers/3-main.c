#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
* main - Simple calculator
* @argc: Argument count
* @argv: Argment vector
* Return: 0 if Success, 98 99 or 100 if failure
*/
int main(int argc, char *argv[])
{
	int first;
	int second;
	int result;
	int (*operation)(int, int) = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	first = atoi(argv[1]);
	second = atoi(argv[3]);
	result = operation(first, second);

	printf("%d\n", result);

	return (0);
}
