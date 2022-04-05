#include <stdlib.h>

/**
 * free_grid - Frees a 2 demensional array of integers.
 * @grid: The matrix to free.
 * @height: The height of the matrix.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

