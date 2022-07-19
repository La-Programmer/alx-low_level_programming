#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 * of a square matrix.
 * @a: this argument is the matrix.
 * @size: this argument is the size of the matrix.
 *
 * Return: the function returns nothing.
 */

void print_diagsums(int *a, int size)
{

	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((i == j) && (i + j == size - 1))
			{
				sum1 += a[(size * i) + j];
				sum2 += a[(size * i) + j];
			}
			else if (i == j)
			{
				sum1 += a[(size * i) + j];
			}
			else if (i + j == size - 1)
			{
				sum2 += a[(size * i) + j];
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
