#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals.
 * @a: The matrix.
 * @size: The matrix's size.
 * Description: Prints the sum of the two diagonals of a square
 *		matrix of integers.
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size * size; i = i + size + 1)
		s1 += a[i];
	for (i = size - 1; i <= size * size - size; i = i + size - 1)
		s2 += a[i];
	printf("%d, %d\n", s1, s2);
}

