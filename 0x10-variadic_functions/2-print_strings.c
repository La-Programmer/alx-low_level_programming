#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - Prints all strings passed as arguments separated
* @separator: String used as a separator for the printed list
* @n: Number of strings passed to the function
* Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;
	char *str;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", str);
			if ((count + 1 != n) && (separator != NULL))
				printf("%s", separator);
		}
	}
	printf("\n");
}
