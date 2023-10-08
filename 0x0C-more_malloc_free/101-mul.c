#include <stdlib.h>
#include "main.h"
/**
* _isdigit - Checks whether an input string is a digit
* @str: Input string
* Return: 1 if true, 0 if false
*/
int _isdigit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

/**
* convert_num - Changes a string to an intger
* @str: Input string
* Return: Converted digits
*/
long int convert_num(char *str)
{
	int i = 0;
	long int result = 0;

	while (str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return (result);
}

/**
* print_num - Prints a number to stdout
* @num: Number to print
* Return: Nothing
*/
void print_num(long int num)
{
	long unsigned int i = num;

	if (num < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10 != 0)
		print_num(i / 10);

	_putchar('0' + i % 10);
}

/**
* main - Multiplies two postive numbers
* @argc: Argument count
* @argv: Argument vector
* Return: 0 success, 98 Error
*/
int main(int argc, char *argv[])
{
	long int i, j, result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\0');
		exit(98);
	}
	i = convert_num(argv[1]);
	j = convert_num(argv[2]);
	result = i * j;

	print_num(result);
	_putchar('\n');
	return (0);
}
