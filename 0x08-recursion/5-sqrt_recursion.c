#include "main.h"
/**
* _sqrt - Recursively finds the square root of a number
* @a: Divisor
* @n: Number whose square root to find
* Return: Square root
*/
int _sqrt(int a, int n)
{
	if ((a * a) == n)
		return (a);
	else if (a > (n / 2))
		return (-1);
	return (_sqrt(a + 1, n));
}
/**
* _sqrt_recursion - Finds the square root of a number
* @n: Number whose square root to find
* Return: Square root
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
