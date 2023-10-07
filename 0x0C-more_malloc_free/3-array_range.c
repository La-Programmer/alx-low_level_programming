#include <stdlib.h>
#include "main.h"
/**
* array_range - Creates an array of integers
* @min: Minimum array value
* @max: Maximum array value
* Return: Pointer to the newly created array OR NULL on Failure
*/
int *array_range(int min, int max)
{
	int *t, i, j;

	if (min > max)
		return (NULL);

	t = malloc(sizeof(int) * (max - min + 1));
	if (t == NULL)
		return (NULL);

	for (i = 0, j = min; i < ((max - min) + 1); i++, j++)
		t[i] = j;

	return (t);
}
