#include "main.h"
#include <stdlib.h>
/**
* free_grid - allocates a grid, make space and free space.
* @grid: pointer to pointer.
* @height: height of grid.
* Return: void.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
