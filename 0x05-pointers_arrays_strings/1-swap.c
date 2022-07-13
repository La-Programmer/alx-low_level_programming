#include "main.h"
/**
 * swap_int - this function swaps the value of
 * two integers.
 * @a: this argument is a random integer.
 * @b: this argument is also a random integer.
 *
 * Return: my function returns nothing.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

