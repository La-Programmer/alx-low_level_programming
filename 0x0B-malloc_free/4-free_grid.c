#include <stdlib.h>
#include "main.h"
/**
* free_grid - Frees the memory space of a 2D grid
* @grid: Address of the 2D grid
* @height: Height of the grid
* Return: Nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
