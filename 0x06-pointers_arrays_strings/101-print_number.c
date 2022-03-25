#include "main.h"

/**
 * _pow - Computes the power of a number by another.
 * @a: The first number.
 * @n: The power to compute.
 * Return: a ^ n.
 */
int _pow(int a, int n)
{
	int i, res = a;

	if (n == 0)
		res = 1;
	else if (n > 1)
		for (i = 1; i < n; i++)
			res = res * a;
	return (res);
}

/**
 * print_number - Prints a number.
 * @n: The number to print.
 */
void print_number(int n)
{
	int tmp, p, order = 0;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	for (tmp = n ; (tmp / 10) > 0; tmp = tmp / 10)
		order++;
	while (order >= 0)
	{
		p = _pow(10, order);
		_putchar(48 + (n / p));
		n  = n % p;
		order--;
	}
}

