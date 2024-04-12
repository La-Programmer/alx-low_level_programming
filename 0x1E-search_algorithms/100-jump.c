#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Implementation of jump search algorithm
 * @array: The array to search
 * @size: The size of the array to search
 * @value: The value to search for
 *
 * Return: The first index at which value is found or -1
 * if value os not found
 */

int jump_search(int *array, size_t size, int value)
{
	int jump_size = (int)sqrt(size);
	size_t low = 0;
	size_t high = jump_size;
	int result = -1;
	size_t i;

	if (array == NULL)
		return (result);
	while (low < size)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (value >= array[low] && (value <= array[high] || high >= size - 1))
		{
			printf("Value found between indexes [%lu] and [%lu]\n", low, high);
			for (i = low; i <= high && i < size; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					result = i;
					return (result);
				}
			}
			return (result);
		}
		else
		{
			low += jump_size;
			high += jump_size;
		}
	}
	return (result);
}
