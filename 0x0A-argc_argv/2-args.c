#include <stdio.h>
#include "main.h"
/**
* main - Prints all the arguments it receives including the first one
* @argc: Argument count
* @argv: Argument vector
* Return: 0 Success
*/
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
