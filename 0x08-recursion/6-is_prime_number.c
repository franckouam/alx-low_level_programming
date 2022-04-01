/**
 * _has_divisor - Test if a number has a divisor.
 * @n: The number.
 * @to: The limit of testing numbers.
 * Return: 1 if n has a divisor besides of 1 and n.
 *	   0 otherwise.
 */
int _has_divisor(int n, int to)
{
	if (n == 2 || n == 3)
		return (0);
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return (0);
	if (n == 1)
		return (0);
	if (n  == (n % to == 0 || n % (to + 2) == 0))
		return (0);
	return (_has_divisor(n, to + 6));
}

/**
 * is_prime_number - Tests if a number is a prime number.
 * @n: The number to test.
 * Return: 1 if n is prime. 0 otherwise.
 */
int is_prime_number(int n)
{
	return (_has_divisor(n, 5));
}
