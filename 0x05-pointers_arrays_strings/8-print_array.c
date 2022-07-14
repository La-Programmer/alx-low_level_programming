#include "main.h"
#include <stdio.h>

/**
 * print_array - this function prints n number of the
 * values in an array.
 * @a: This argument is the pointer to the array.
 * @n: this argumet is the number of array
 * elements to be printed.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index == (n - 1))
		{
			printf("%d", *(a + index));
		}
		else
		{
			printf("%d, ", *(a + index));
		}
	}
	putchar('\n');
}
