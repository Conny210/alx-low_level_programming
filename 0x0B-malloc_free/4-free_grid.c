#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees grid
 * @grid: double pointer
 * @height: array height
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
