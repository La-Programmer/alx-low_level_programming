#include "main.h"
/**
* factorial - Returns the factorial of a given positive number and
* returns -1 if the number is negative
* @n: Number
* Return: nothing
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);
	return (n *= factorial(n - 1));
}
