#include <stdlib.h>

/**
 * alloc_grid - creates 2D array
 * @columns: number of columns
 * @rows: number of rows
 *
 * Return: pointer (sucess) OR NULL (failed)
 */

int **alloc_grid(int columns, int rows)
{
	int **matrix;
	int col, row;

	if (columns <= 0 || rows <= 0)
		return (NULL);

	matrix = (int **)malloc(sizeof(int *) * rows);
	if (matrix == NULL)
		return (NULL);

	for (row = 0; row < rows; row++)
	{
		matrix[row] = (int *)malloc(sizeof(int) * columns);
		if (matrix[row] == NULL)
		{
			for (col = 0; col < row; col++)
				free(matrix[col]);
			free(matrix);
			return (NULL);
		}

		for (col = 0; col < columns; col++)
			matrix[row][col] = 0;
	}
	return (matrix);
}

