#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - Returns a pointer to a 2 dimensional array of integers
* @width: Size of arrays inside 2D array
* @height: Size of 2D array
* Return: Pointer to the 2D array, NULL Failure
*/
int **alloc_grid(int width, int height)
{
	int **t, i, j = 0;

	if (width < 1 || height < 1)
		return (NULL);

	t = (int **)malloc(sizeof(int *) * height);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		t[i] = (int *)malloc(sizeof(int) * width);
		if (t[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		while (j < width)
		{
			t[i][j] = 0;
			j++;
		}
	}
	return (t);
}
