#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n items of array of integers.
 * @a: The array.
 * @n: The number of element to print.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i + 1 < n)
			printf(", ");
	}
	printf("\n");
}
