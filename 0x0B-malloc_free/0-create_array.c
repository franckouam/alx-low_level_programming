#include <stdlib.h>
/**
 * create_array - Creates an array of chars.
 * @size: The size of array.
 * @c: The char to initialize array with.
 * Return: A pointer to the array if everything works well.
 *	   NULL otherwise.
 */
char *create_array(unsigned int size, char c)
{
	char *res = NULL;
	unsigned int i;

	if (size > 0)
	{
		res = malloc(size * sizeof(char));
		if (res != NULL)
			for (i = 0; i < size; i++)
				res[i] = c;
	}

	return (res);
}
