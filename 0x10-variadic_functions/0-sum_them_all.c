#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - Returns the sum of all its parameters
* @n: First parameter
* Return: Sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count, total = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (count = 0; count < n; count++)
		total += va_arg(args, int);

	return (total);
}
