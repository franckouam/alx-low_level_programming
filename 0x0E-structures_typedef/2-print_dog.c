#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print a dog.
 * @dog: The dog to print
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		if (d->name)
			printf("%s", d->name);
		else
			printf("(nil)");
		printf("\n");
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		if (d->owner)
			printf("%s", d->owner);
		else
			printf("(nil)");
		printf("\n");
	}
}

