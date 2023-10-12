#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - Searches for an integer
* @array: Array of integers to search through
* @size: Number of elements in the array
* @cmp: Pointer to function used to compare values
* Return: Index of first element for which cmp does not return 0, -1 if
* no matches or size < 1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size < 1)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]))
			return (count);
	}

	return (-1);
}
