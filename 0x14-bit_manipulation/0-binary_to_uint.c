/**
 * _pow - Computes x raised to power of y.
 * @x: The mantisse.
 * @y: The exposant.
 * Return: x ^ y.
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow(x, y - 1));
}


/**
 * _strlen - Returns the length of a string.
 * @s: The string whose the length should be returned.
 * Return: The length of s.
 */
int _strlen(const char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen(s + 1));
}



/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: the binary to convert.
 * Return: The unsigned int representation of the binary number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0, n;

	n = _strlen(b);
	if (!b)
		return (0);
	for (i = 0; i < n; i++)
		if (b[i] == '1')
			res += _pow(2, n - 1 - i);
		else if (b[i] != '0')
			return (0);
	return (res);
}
