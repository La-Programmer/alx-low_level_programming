#include "main.h"
#include <stdio.h>
/**
* print_diagsums - Prints the sums of the two diagonals
* of a square matrix of integers
* @a: 2-D array
* @size: Size of the array
* Return: Nothing
*/
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += *(a + (size * i) + i);
		sum2 += *(a + (size * i) + ((size - 1) - i));
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
