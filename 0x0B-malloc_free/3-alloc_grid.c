#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function returns a pointer to a 2D array of integers
 * @width: input integer
 * @height: input integer
 * Return: If height or width are less or equal to 0 it returns NULL
 *         If the function fails, returns NULL
 *         Otherwise it returns a pointer to array
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
	free(grid);
}

