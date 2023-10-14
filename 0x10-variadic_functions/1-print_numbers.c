#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_numbers - Prints numbers
* @separator: A string to be used to separate the printed list
* @n: Number of numbers to be printed
* Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(args, int));
		if ((count + 1 != n) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
}
