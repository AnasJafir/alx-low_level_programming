#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function frees a 2D array
 * @grid: 2D array input
 * @height: integer input
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
