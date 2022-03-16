#include <limits.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number whose the last digit will be returned.
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	int a, r = 0;

	if (n == INT_MIN)
	{
		n = INT_MAX;
		r = 1;
	}
	if (n < 0)
		n = -n;
	a = n % 10;
	a = a + r;
	_putchar('0' + a);
	return (a);
}
