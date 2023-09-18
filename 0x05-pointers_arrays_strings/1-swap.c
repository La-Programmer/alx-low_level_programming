#include "main.h"
/**
* swap_int - Swaps the values of two integers
* @a: First integer
* @b: Second integer
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
