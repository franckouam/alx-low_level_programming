/**
 * _find_sqrt - Finds the square root of a number.
 * @n: The number whose the square root will be found.
 * @to: The limit of testing numbers.
 * Return: The square root of n if it has.
 *	   -1 otherwise.
 */
int _find_sqrt(int n, int to)
{
	if (n < 0 || to < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n == to * to)
		return (to);
	return (_find_sqrt(n, to - 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose the square root will be returned.
 * Return: The square root of n.
 */
int _sqrt_recursion(int n)
{
	return (_find_sqrt(n, n / 2));
}
