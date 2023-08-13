#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the two dimensional array
 * @grid: grid function
 * @height: the row inserted
 *
 * return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
