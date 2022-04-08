#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory to allocate.
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *res = malloc(b * sizeof(void *));

	if (res == NULL)
		exit(98);
	return (res);
}

