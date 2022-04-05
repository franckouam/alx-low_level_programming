#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 demensional array of integers.
 * @width: The width of the matrix.
 * @height: The height of the matrix.
 * Return: A pointer to the matrix if height and width are > 0.
 *	   NULL otherwise.
 */
int **alloc_grid(int width, int height)
{
	int **res;
	int i = 0, j = 0;

	res = malloc(width * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		res[i] = malloc(height * sizeof(int));
		for (j = 0; j < width; j++)
			res[i][j] = 0;
	}
	return (res);
}

