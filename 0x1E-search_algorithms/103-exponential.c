#include <stdio.h>
#include "search_algos.h"

/**
 * custom_arr_print - Prints array in a customized way
 * @array: Array to print
 * @start: Start index
 * @end: End index
 *
 * Return: Nothing
 */
void custom_arr_print(int *array, size_t start, size_t end)
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
 * binary_search_custom - Binary search implementation
 * @array: Array to search through
 * @low: Lower pointer
 * @high: Higher pointer
 * @value: Value to find in the array
 *
 * Return: The first index where the value is found or -1
 * if not found
 */

int binary_search_custom(int *array, size_t low, size_t high, int value)
{
	int m;
	int result = -1;

	while (high > low && array[m] != value)
	{
		m = (low + high) / 2;
		custom_arr_print(array, low, high);
		if (array[m] <= value)
		{
			low = m + 1;
		}
		else
		{
			high = m - 1;
		}

		if (array[m] == value)
			result = m;
	}
	if (result == -1)
		custom_arr_print(array, low, high);
	return (result);
}

/**
 * min - Gives the minimum of two numbers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The lesser of the two numbers
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * exponential_search - Implementation of the exponential search
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to find
 *
 * Return: The first index where value is found or
 * -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	int result = -1;

	if (array == NULL)
	{
		return (result);
	}

	if (array[0] == value)
	{
		return (0);
	}
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	printf(
			"Value found between indexes [%lu] and [%lu]\n",
			(i / 2),
			min(i, size - 1)
	      );
	result = binary_search_custom(array, (i / 2), min(i, size - 1), value);
	return (result);
}
