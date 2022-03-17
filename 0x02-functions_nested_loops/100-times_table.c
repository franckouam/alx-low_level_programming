#include "main.h"

/**
 * display_cell - Display a cell of the table.
 * @nbr: The number which should be displayed.
 * @column: The column where the nbr will be displayed.
 */
void display_cell(int nbr, int column)
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
	{
		_putchar('0' + c);
		_putchar('0' + d);
	}
	else
	{
		if (column != 0)
			_putchar(32);
		if (d > 0)
		{
			_putchar('0' + d);
		}
		else
		{
			if (column != 0)
				_putchar(32);
		}
	}
	_putchar('0' + u);
}

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The size of the table.
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n == 0)
	{
		_putchar(48);
		_putchar('\n');
	}
	else
	{
		if ((n <= 15) && (n > 0))
		{
			for (i = 0; i <= n; i++)
			{
				for (j = 0; j <= n; j++)
				{
					x = i * j;
					display_cell(x, j);
					if (j != n)
					{
						_putchar(',');
						_putchar(32);
					}
					else
					{
						_putchar('\n');
					}


				}
			}
		}
	}
}
