
/**
 * swap_int - Swaps the value of two integers.
 * @a: The first integer
 * @b: The second integer
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}


