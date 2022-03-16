#include "main.h"

/**
 * display_nbr - Display a number.
 * @nbr: The number which should be displayed.
 */
void display_nbr(int nbr)
{
	int c, d, u;

	if (nbr < 0)
	{
		_putchar('-');
		nbr = -nbr;
	}
	c = nbr / 100;
	d = (nbr % 100) / 10;
	u = nbr % 10;

	if (c > 0)
		_putchar('0' + c);
	if (d > 0)
		_putchar('0' + d);
	_putchar('0' + u);
}

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line..
 *@n: The starting point number.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			display_nbr(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(32);
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			display_nbr(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(32);
			}
		}
	}
	_putchar('\n');
}
