#include "main.h"
/**
* _isPrime - Checks if a number is prime
* @a: Divisor
* @n: Number to check
* Return: 1 if prime and 0 if not
*/
int _isPrime(int a, int n)
{
	if (n < 2)
		return (0);
	else if (a > (n / 2))
		return (1);
	else if ((n % a) == 0)
		return (0);
	return (_isPrime(a + 1, n));
}
/**
* is_prime_number - Checks if a number is prime
* @n: Number to check
* Return: 1 if prime and 0 if not
*/
int is_prime_number(int n)
{
	return (_isPrime(2, n));
}
