#include <stdio.h>
#include "search_algos.h"

/**
 * calc_pos - Calculate the position
 * @array: Array to search
 * @low: Low pointer
 * @high: High pointer
 * @value: Value to find
 *
 * Return: Position
 */

int calc_pos(int *array, int low, int high, int value)
{
	return (
			low + ((
					(double)(high - low) / (array[high] - array[low])) * (value - array[low]
					))
	       );
}

/**
 * interpolation_search - Implementation of interpolation search
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to find in the array
 *
 * Return: First index at which the value is found
 * or -1 if it is not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	int high = size - 1, low = 0, result = -1;
	size_t pos = calc_pos(array, low, high, value);

	if (array == NULL)
		return (result);
	if (pos >= size)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (result);
	}
	while (array[pos = calc_pos(array, low, high, value)] != value || high != low)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (result);
}
