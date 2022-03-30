/**
 * _pow_recursion - Computes x raised to power of y.
 * @x: The mantisse.
 * @y: The exposant.
 * Return: x ^ y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
