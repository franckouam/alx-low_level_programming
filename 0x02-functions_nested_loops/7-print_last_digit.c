#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number whose the last digit will be returned.
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	_putchar('0' + a);
	return (a);
}
