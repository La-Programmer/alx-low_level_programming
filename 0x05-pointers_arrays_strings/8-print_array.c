#include "main.h"
#include <stdio.h>
/**
* print_array - Prints n elements of an array
* @a: Array to be printed
* @n: Number of elements to be printed from the array
* Return: nothing
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
