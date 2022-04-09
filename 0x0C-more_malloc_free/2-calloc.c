#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array.
 * @nmenb: The number of items of the array.
 * @size: The byte size of each element
 * Return: A pointer on the allocated memory.
 *	   NULL if size of nmenb is egal to 0 
 *	   or if the memory allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;
	unsigned int i = 0;
	
	if (nmemb == 0 || size == 0)
	{
		res = NULL;
	}
	else
	{
		res = malloc(nmemb * sizeof(size));
		if (res != NULL)
		{
			for (i = 0; i < nmemb; i++)
				*(res + i) = (void *)0;
		}
	}
	return (res);
}
