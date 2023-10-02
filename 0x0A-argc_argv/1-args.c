#include "main.h"
#include <stdio.h>
/**
* main - Prints the number of arguments passed into it
* @argc: Argument count
* @argv: Argument vector
* Return: (0) Success
*/
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
