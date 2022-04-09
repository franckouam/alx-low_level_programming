#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum item of the array.
 * @max: The maximum item of the array.
 * Return: A pointer to the created array if everything runs fine.
 *	   NULL if min > max or malloc return NULL.
 */
int *array_range(int min, int max)
{
	int i = 0, n = 0;
	int *res;

	if (min > max)
	{
		res = NULL;
	}
	else
	{
		n = max - min + 1;
		res = malloc(n * sizeof(int));
		if (res != NULL)
		{
			for (i = 0; i <= n; i++)
				res[i] = min + i;
		}
	}
	return (res);
}
