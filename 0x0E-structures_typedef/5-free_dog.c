#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs.
 * @d: The dog to free.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
