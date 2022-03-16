#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: The number whose the sign is displayed.
 * Return: 1 and prints + if n is greater than 0.
 *	   0 and prints 0 if n is zero.
 *	  -1 and prints - if n is less than zero.
 */
int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		_putchar(43);
	}
	else if (n == 0)
	{
		a = 0;
		_putchar('0');
	}
	else
	{
		a = -1;
		_putchar(45);
	}
	return (a);
}
