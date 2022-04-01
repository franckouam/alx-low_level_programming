/**
 * _find_sqrt - Finds the square root of a number.
 * @n: The number whose the square root will be found.
 * @to: The limit of testing numbers.
 * Return: The square root of n if it has.
 *	   -1 otherwise.
 */
int _has_divisor(int n, int to)
{
	if (n == 2 || n == 3)
		return (0);
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return 0;
	if (n == 1)
		return (0);
	if (n  == (n % to == 0 || n % (to + 2) == 0))
		return (0);
	return (_has_divisor(n, to + 6));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose the square root will be returned.
 * Return: The square root of n.
 */
int is_prime_number(int n)
{
	return (_has_divisor(n, n));
}
