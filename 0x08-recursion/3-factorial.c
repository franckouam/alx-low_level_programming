/**
 * factorial - Returns the factorial of a number.
 * @n: The number whose the factorial will be returned.
 * Return: The factorial of n (n!).
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
