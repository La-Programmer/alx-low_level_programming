#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * custom_arr_print - Prints array in a customized way
 * @array: Array to print
 * @start: Start index
 * @end: End index
 *
 * Return: Nothing
 */
void custom_arr_print(int *array, int start, int end)
{
	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		printf("%d", array[start]);
		if (start != end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Binary search implementation
 * @array: Array to search through
 * @size: Size of the array to search
 * @value: Value to find in the array
 *
 * Return: The first index where the value is found or -1
 * if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int m;
	int l = 0;
	int r = size - 1;
	int result = -1;

	if (array == NULL)
		return (result);

	while ((r - l) > 0)
	{
		m = (l + r) / 2;
		/*printf("Current value of m: %d\n", m);*/
		custom_arr_print(array, l, r);
		if (array[m] <= value)
		{
			l = m + 1;
			/*printf("New value of l: %d\n", l);*/
		}
		else
		{
			r = m - 1;
			/*printf("New value of r: %d\n", r);*/
		}

		if (array[m] == value)
			result = m;
	}
	if (result == -1)
		custom_arr_print(array, l, r);
	return (result);
}
