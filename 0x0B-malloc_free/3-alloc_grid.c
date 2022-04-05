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

	res = malloc(height * width * sizeof(int *));
	if (res != NULL)
	{
		for (i = 0; i < width; i++)
		{
			res[i] = malloc(width * sizeof(int));
			if (res[i] != NULL)
				for (j = 0; j < height; j++)
					res[i][j] = 0;
		}
	}
	return (res);
}

