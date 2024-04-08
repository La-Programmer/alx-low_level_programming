#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Performs a linear search on an array to
 * find a number
 * @array: The array to search
 * @size: The size of the array to search
 * @value: The value to find
 *
 * Return: The first index where value os found or -1 o failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t counter;

	if (size == 0 || array == NULL)
		return (-1);
			for (counter = 0; counter < size; counter++)
			{
				printf("Value checked array[%lu] = [%d]\n", counter, array[counter]);
				if (array[counter] == value)
					return (counter);
			}
	return (-1);
}
